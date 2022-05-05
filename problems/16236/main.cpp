#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 20

using namespace std;

int n,n_size=1,ans,n_cnt,range,total;
int graph[MAX+1][MAX+1],cnt[7];
bool visited[MAX+1][MAX+1];
queue<pair<pair<int,int>,int>> q;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void clear(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			visited[i][j]=false;
		}
	}
	while(!q.empty()) q.pop();
}

int check_cnt(){
	int fin=1;
	for(int i=1;i<6;i++){
		if(i<=cnt[i]) fin=i+1;
	}
	return fin;
}

bool check(int x, int y){
	if(graph[x][y]<=n_size and graph[x][y]!=0){
		total--;
		if(total==0) return true;
		if(graph[x][y]==n_size){
			n_cnt++;
			if(n_cnt==n_size){
				n_size++;
				n_cnt=0;
			}
		}
		graph[x][y]=0;
		clear();
	}
	return false;
}

void bfs(int sx, int sy){
	int rx[4]={-1,0,1,0};
	int ry[4]={0,-1,0,1};
	q.push({{sx,sy},0});
	visited[sx][sy]=true;
	while(!q.empty()){
		int x=q.front().first.first;
		int y=q.front().first.second;
		int t=q.front().second;
		q.pop();
		if(check(x,y)){ans=t; break;}
		for(int i=0;i<4;i++){
			int nx=x+rx[i];
			int ny=y+ry[i];
			if(visited[nx][ny] or (nx<1 || ny<1 || nx>n || ny>n)) continue;
			q.push({{nx,ny},t+1});
			visited[nx][ny]=true;
		}
	}
}

int main(){
	init();
	cin>>n;
	int x,y,maxi=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>graph[i][j];
			if(graph[i][j]==9){
				x=i,y=j;
				graph[i][j]=0;
			}
			if(graph[i][j]>maxi) maxi=graph[i][j];
			cnt[graph[i][j]]++;
		}
	}
	range=check_cnt();
	for(int i=1;i<=range;i++){
		total+=cnt[i];
	}
	bfs(x,y);
	cout<<ans<<endl;
	return 0;
}
