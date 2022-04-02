#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 8

using namespace std;

int n,m,sum=0;
int graph[MAX+1][MAX+1];
bool visited[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void bfs(int x, int y){
	vector<pair<int,int>> v;
	q.push({1,1});
	while(!q.empty()){
		
	}
}

int main(){
	init();
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>graph[i][j];
		}
	}
	bfs(1,1);
	return 0;
}
