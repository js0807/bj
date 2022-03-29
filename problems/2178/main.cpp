#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 100

using namespace std;

int graph[MAX+1][MAX+1],n,m;
bool visited[MAX+1][MAX+1];

bool check(int x, int y){
	if(x<1 or y<1 or x>n or y>m) return false;
	return true;
}

/*
void show(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%d",graph[i][j]);
		}
		printf("\n");
	}
	printf("=========================\n");
}
*/

void bfs(){
	int rx[4]={1,-1,0,0};
	int ry[4]={0,0,1,-1};
	queue<pair<int,int>> q;
	q.push({1,1});
	visited[1][1]=true;
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nx=x+rx[i];
			int ny=y+ry[i];
			if(!visited[nx][ny] and check(nx,ny) and graph[nx][ny]){
				visited[nx][ny]=true;
				q.push({nx,ny});
				graph[nx][ny]+=graph[x][y];
				show();
			}
		}
	}
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%1d",&graph[i][j]);
		}
	}
	bfs();
	printf("%d\n",graph[n][m]);
	return 0;
}
