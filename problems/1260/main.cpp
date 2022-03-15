#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 1000

using namespace std;

int n,m,v;
vector<int> graph[MAX+1];
bool visited[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dfs(int x){
	cout<<x<<' ';
	visited[x]=true;
	for(auto y:graph[x]){
		if(!visited[y]) dfs(y);
	}
}

void bfs(int x){
	queue<int> q;
	q.push(x);
	visited[x]=true;
	while(!q.empty()){
		int y = q.front();
		cout<<y<<' ';
		q.pop();
		for(auto k:graph[y]){
			if(!visited[k]){
				q.push(k);
				visited[k]=true;
			}
		}
	}
}

int main(){
	init();
	cin>>n>>m>>v;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for(int i=1;i<=n;i++){
		sort(graph[i].begin(),graph[i].end());
	}
	dfs(v);
	cout<<endl;
	fill_n(visited,n+1,false);
	bfs(v);
	cout<<endl;
	return 0;
}
