#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
#include <queue>

#define MAX 1000

using namespace std;

int graph[MAX+1][MAX+1],n,m;
int cnt[MAX+1][MAX+1];
bool visited[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int bfs(){
	int rx[4]={-1,1,0,0};
	int ry[4]={0,0,-1,1};
	queue< pair<pair<int,int>,bool> > q;
	q.push(make_pair(make_pair(1,1),false));
	visited[1][1]=true;
	while(!q.empty()){
		int x=q.front().first.first;
		int y=q.front().first.second;
		bool flag=q.front().second;
		if(x==n and y==m) return cnt[n][m];
		q.pop();
		for(int i=0;i<4;i++){
			int nx=x+rx[i];
			int ny=y+ry[i];
			if(visited[nx][ny] or (nx<1 or nx>n or ny<1 or ny>m)) continue;
			if(graph[nx][ny]==0){
				if(!flag) q.push(make_pair(make_pair(nx,ny),false));
				else q.push(make_pair(make_pair(nx,ny),true));
				cnt[nx][ny]+=cnt[x][y];
				visited[nx][ny]=true;
			} else{
				if(!flag){
					q.push(make_pair(make_pair(nx,ny),true));
					cnt[nx][ny]+=cnt[x][y];
					visited[nx][ny]=true;
				}
			}
		}
	}
	return -1;
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%1d",&graph[i][j]);
			cnt[i][j]=1;
		}
	}
	cout<<bfs()<<endl;
	return 0;
}
