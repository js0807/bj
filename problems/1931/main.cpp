#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
#include <cstdint>

using namespace std;

vector<pair<int,pair<int,int>>> v;

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
	int n,cnt=0,max=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int s,e;
		cin>>s>>e;
		if(e>max) max=e;
		v.push_back({e-s,{s,e}});
	}
	
	stable_sort(v.begin(),v.end());
	
	bool t[max]={false,};
	for(auto k:v){
		int st=k.second.first,et=k.second.second;
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
