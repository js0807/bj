#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n,cnt=0;
vector<int> v[101];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

dfs(int x,int y){
	
}

int main(){
	init();
	int x,y,t;
	cin>>n>>x>>y>>t;
	for(int i=0;i<t;i++){
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(x,y);
	cout<<cnt<<endl;
	return 0;
}
