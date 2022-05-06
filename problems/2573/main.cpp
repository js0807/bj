#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 300

using namespace std;

int graph[MAX+1][MAX+1],n,m;
bool visited[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

bool dfs(int x, int y){

}

void bfs(){
	queue<int> q;
}

int main(){
	init();
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>graph[i][j];
		}
	}
	bfs();
	return 0;
}
