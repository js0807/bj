#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 100

using namespace std;

int graph[MAX+1][MAX+1],ans=0;
bool visited[MAX+1][MAX+1];

void bfs(int n,int m){
	queue<pair<int,int>> q;
	q.push({1,1});
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		if(graph[x][y]){
			graph[x][y]=0;
			if(y!=m) q.push({x,y+1});
			if(x!=n) q.push({x+1,y});
			if(x!=1) q.push({x-1,y});
			if(y!=1) q.push({x,y-1});
			ans+=1;
		}
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%1d",&graph[i][j]);
		}
	}
	bfs(n,m);
	printf("%d\n",ans);
	return 0;
}
