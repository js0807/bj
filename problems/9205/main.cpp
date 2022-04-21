#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int t;
	vector<pair<int,int>> v;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		for(int j=0;j<n+2;j++){
			int x,y;
			cin>>x>>y;
			v.push_back({x,y});
		}
		int before[2]={-1000,0};
		bool flag=true;
		for(auto k:v){
			int d=k.first-before[0]+k.second-before[1];
			if(d>1000) flag=false;
			before[0]=k.first; before[1]=k.second;
		}
		if(flag) cout<<"happy\n";
		else cout<<"sad\n";
	}
	return 0;
}
