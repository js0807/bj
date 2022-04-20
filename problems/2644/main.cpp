#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n,cnt=0;
vector<int> v[101];
bool visited[101],flag;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dfs(int x,int y,int d){
	if(x==y){
	    	cout<<d<<endl;
		flag=true;
		return;
	}
	visited[x]=true;
	for(auto k:v[x]){
		if(!visited[k] and !flag){
			dfs(k,y,d+1);
			cnt++;
		}	
	}
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
	dfs(x,y,0);
	if(!flag) cout<<-1<<endl;
	return 0;
}
