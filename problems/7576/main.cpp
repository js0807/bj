#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 1000

using namespace std;

int graph[MAX+1][MAX+1],n,m,cnt=1;
bool visited[MAX+1][MAX+1];
vector<pair<int,int>> v;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

bool check(int x, int y){
	if(x<1 or y<1 or x>n or y>m) return false;
	return true;
}

void search(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(graph[i][j]==1) v.push_back({i,j});
		}
	}
}

void show(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<graph[i][j]<<' ';
		}
		cout<<'\n';
	}
	cout<<"======================\n";
}

void bfs(){
	queue<pair<int,int>> q;
	int rx[4]={1,-1,0,0};
	int ry[4]={0,0,1,-1};
	for(auto k:v){
		int sx=k.first;
		int sy=k.second;
		q.push({sx,sy});
		visited[sx][sy]=true;
	}
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		int b=graph[x][y];
		q.pop();
		for(int i=0;i<4;i++){
			int nx=x+rx[i];
			int ny=y+ry[i];
			if(!visited[nx][ny] and check(nx,ny) and graph[nx][ny]!=-1){
				q.push({nx,ny});
				visited[nx][ny]=true;
				graph[nx][ny]+=b+1;
				//show();
			}
		}
	}
}

int main(){
	init();
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>graph[i][j];
		}
	}
	search();
	bfs();
	int maxi=0,flag=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(graph[i][j]>maxi) maxi=graph[i][j];
			if(graph[i][j]==0) flag=0;
		}
	}
	if(flag) cout<<maxi-1<<endl;
	else cout<<-1<<endl;
	return 0;
}
