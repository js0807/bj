#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 50

using namespace std;

int graph[MAX+1][MAX+1],n,m,cnt=0;
bool visited[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dfs(int x, int y, int d){
	if(x<1 or y<1 or x>n or y>m or graph[x][y]==1) return;
	visited[x][y]=1;
	cnt++;
	for(int i=0;i<4;i++){
		d=(d+3)%4;
		if(d==0) dfs(x-1,y,d);
		if(d==1) dfs(x,y+1,d);
		if(d==2) dfs(x+1,y,d);
		if(d==3) dfs(x,y-1,d);
	}
	/*
	if(d==0){
		if(graph[x-1][y]==1)
	}*/
}

int main(){
	init();
	cin>>n>>m;
	int r,c,d;
	cin>>r>>c>>d;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>graph[i][j];
		}
	}
	dfs(r+1,c+1,d);
	cout<<cnt<<endl;
	return 0;
}
