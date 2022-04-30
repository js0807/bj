#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

using namespace std;

map<int,int> up;
map<int,int> down;
bool visited[101];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void bfs(){
	queue<pair<int,int>> q;
	q.push({1,0});
	visited[1]=true;
	while(!q.empty()){
		int x=q.front().first;
		int cnt=q.front().second;
		if(x>=100){
			cout<<cnt<<endl;
			break;
		}
		q.pop();
		for(int i=1;i<=6;i++){
			int nx=x+i;
			if(visited[nx]) continue;
			visited[nx]=true;
			if(up.find(nx)!=up.end()) nx=up[nx];
			if(down.find(nx)!=down.end()) nx=down[nx];
			q.push({nx,cnt+1});
		}
	}
}

int main(){
	init();
	int n,m,s,e;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>s>>e;
		up.insert({s,e});
	}
	for(int i=0;i<m;i++){
		cin>>s>>e;
		down.insert({s,e});
	}
	bfs();
	return 0;
}
