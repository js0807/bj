#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 100

using namespace std;

int graph[MAX+1][MAX+1][MAX+1],n,m,h,cnt=1;
bool visited[MAX+1][MAX+1][MAX+1];
vector<pair<pair<int,int>,int>> v;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

bool check(int x, int y, int z){
	if(x<1 or y<1 or z<1 or x>n or y>m or z>h) return false;
	return true;
}

void search(){
	for(int k=1;k<=h;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(graph[i][j][k]==1) v.push_back({{i,j},k});
			}
		}
	}
}

void show(){
	for(int k=1;k<=h;k++){
		cout<<k<<" floor\n";
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cout<<graph[i][j][k]<<' ';
			}
			cout<<'\n';
		}
	}
	cout<<"======================\n";
}

void bfs(){
	queue<pair<pair<int,int>,int>> q;
	int rx[6]={1,-1,0,0,0,0};
	int ry[6]={0,0,1,-1,0,0};
	int rz[6]={0,0,0,0,1,-1};
	for(auto k:v){
		int sx=k.first.first;
		int sy=k.first.second;
		int sz=k.second;
		q.push({{sx,sy},sz});
		visited[sx][sy][sz]=true;
	}
	while(!q.empty()){
		int x=q.front().first.first;
		int y=q.front().first.second;
		int z=q.front().second;
		int b=graph[x][y][z];
		q.pop();
		for(int i=0;i<6;i++){
			int nx=x+rx[i];
			int ny=y+ry[i];
			int nz=z+rz[i];
			if(!visited[nx][ny][nz] and check(nx,ny,nz) and graph[nx][ny][nz]!=-1){
				q.push({{nx,ny},nz});
				visited[nx][ny][nz]=true;
				graph[nx][ny][nz]+=b+1;
				//show();
			}
		}
	}
}

int main(){
	init();
	cin>>m>>n>>h;
	for(int k=1;k<=h;k++){	
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>graph[i][j][k];
			}
		}
	}
	search();
	bfs();
	int maxi=0,flag=1;
	for(int k=1;k<=h;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(graph[i][j][k]>maxi) maxi=graph[i][j][k];
				if(graph[i][j][k]==0) flag=0;
			}
		}
	}
	if(flag) cout<<maxi-1<<endl;
	else cout<<-1<<endl;
	return 0;
}
