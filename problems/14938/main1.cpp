#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 100

using namespace std;

int n,m,r,sum=0;
int scores[MAX+1],result[MAX+1];
vector<pair<int,int>> g[MAX+1];
bool visited[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

/*
int bfs(int x){
	int sum=0;
	queue<int> q;
	q.push(x);
	visited[x]=true;
	sum+=scores[x];
	while(!q.empty()){
		int tmp = q.front();
		q.pop();
		for(auto k:g[tmp]){
			int nx=k.first;
			int d=k.second;
			if(d>r or visited[nx]) continue;
			q.push(nx);
			visited[nx]=true;
			sum+=scores[nx];
		}
	}
	return sum;
}
*/

void dfs(int x,int d){
	if(d>r or visited[x]) return;
	sum+=scores[x];
	visited[x]=true;
	for(auto k:g[x]){
		int nx=k.first;
		int distance=k.second;
		if(distance>r or visited[nx]) continue;
		dfs(nx,d+distance);
	}
}

int main(){
	init();
	cin>>n>>m>>r;
	for(int i=1;i<=n;i++){
		cin>>scores[i];
	}
	for(int i=1;i<=n-1;i++){
		int a,b,c;
		cin>>a>>b>>c;
		g[a].push_back({b,c});
		g[b].push_back({a,c});
	}
	int maxi=-1;
	for(int i=1;i<=n;i++){
		dfs(i,0);
		result[i]=sum;
		sum=0;
		fill_n(visited,n+1,false);
		if(result[i]>maxi) maxi=result[i];
	}
	cout<<maxi<<endl;
	return 0;
}
