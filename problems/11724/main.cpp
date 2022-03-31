#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 1000

using namespace std;

vector<int> graph[MAX+1];
bool visited[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dfs(int x){
	visited[x]=true;
	for(auto k:graph[x]){
		if(!visited[k]) dfs(k);
	}
}

int main(){
	init();
	int n,m,ans=0;
	cin>>n>>m;

	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for(int i=1;i<=n;i++){
		if(!visited[i]) ans++;
		dfs(i);
	}

	cout<<ans<<endl;
	
	return 0;
}
