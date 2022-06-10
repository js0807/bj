#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
#include <cstdint>

using namespace std;

vector<pair <pair<int,int>,int> > v;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

bool check(bool *t,int st,int et){
	for(int i=st;i<=et;i++){
		if(t[i]) return false;
	}
	return true;
}

int main(){
	init();
	int n,cnt=0,maxi=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int s,e;
		cin>>s>>e;
		if(e>maxi) maxi=e;
		v.push_back(make_pair(make_pair(e,s),e-s));
	}
	
	sort(v.begin(),v.end());
	
	/*
	cout<<"sort by e-s\n";
	for(auto k:v){
		cout<<k.second.first<<' '<<k.second.second<<" / ";
	}
	
	cout<<"\nsort by s\n";
	for(auto k:v2){
		cout<<k.first.first<<' '<<k.first.second<<" / ";
	}
	
	cout<<"\nsort by e\n";
	for(auto k:v3){
		cout<<k.first.second<<' '<<k.first.first<<" / ";
	}
	*/
	bool *t = new bool[maxi];
	fill_n(t, maxi, false);
	for(auto k:v){
		int st=k.first.second,et=k.first.first;
		if(check(t,st,et)){
			for(int i=st;i<=et;i++){
				t[i]=true;
			}
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
