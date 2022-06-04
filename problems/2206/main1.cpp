#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 1000

using namespace std;

int graph[MAX+1][MAX+1],n,m;
int cnt[MAX+1][MAX+1];
bool visited[MAX+1][MAX+1],flag;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int bfs(){
	int rx[4]={-1,1,0,0};
	int ry[4]={0,0,-1,1};
	queue<pair<int,int>> q;
	q.push({1,1});
	visited[1][1]=true;
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		if(x==n and y==m){flag=true;break;}
		q.pop();
		for(int i=0;i<4;i++){
			int nx=x+rx[i];
			int ny=y+ry[i];
			if(visited[nx][ny] or (nx<1 or nx>n or ny<1 or ny>m)) continue;
			if(graph[nx][ny]==0){
				q.push({nx,ny});
				cnt[nx][ny]+=cnt[x][y];
				visited[nx][ny]=true;
			}
		}
	}
	return cnt[n][m];
}

void reset(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cnt[i][j]=1;
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
	int mini;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(graph[i][j]){
				flag=false;
				reset();
				graph[i][j]=0;
				int tr=bfs();
				if(tr<mini and flag) mini=tr;
				graph[i][j]=1;
			}
		}
	}
	if(mini>1) flag=true;
	if(!flag) cout<<"-1\n";
	else cout<<mini<<endl;
	return 0;
}
