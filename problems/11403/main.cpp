#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100

using namespace std;

int n,t,graph[MAX+1][MAX+1],visited[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dfs(int x,int d){
	if(d==n) return;
	for(int i=x;i<n;i++){
		for(int j=0;j<n;j++){
			if(graph[i][j] and !visited[t][j]){
				visited[t][j]=1;
				dfs(j,d+1);
			}
		}
		if(d==0) t++;
	}
}

int main(){
	init();
	int i,j;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>graph[i][j];
		}
	}
	dfs(0,0);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<visited[i][j]<<' ';
		}
		cout<<'\n';
	}

	return 0;
}
