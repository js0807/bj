#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100

using namespace std;

int graph[MAX+1][MAX+1],n;
bool visited[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void reset(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			visited[i][j]=false;
		}
	}
}

bool dfs(int x, int y, int h){
	if(x<1 or y<1 or x>n or y>n) return false;
	if(!visited[x][y] and graph[x][y]>h){
		visited[x][y]=true;
		dfs(x+1,y,h);
		dfs(x-1,y,h);
		dfs(x,y+1,h);
		dfs(x,y-1,h);
		return true;
	}
	return false;
}

int main(){
	init();
	cin>>n;
	int maxi=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>graph[i][j];
			if(graph[i][j]>maxi) maxi=graph[i][j];
		}
	}
	int cnt[maxi+1]={0,};
	for(int h=0;h<=maxi;h++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(dfs(i,j,h)) cnt[h]++;	
			}
		}
		reset();
	}
	int ans=0;
	for(int i=0;i<=maxi;i++){
		if(cnt[i]>ans) ans=cnt[i];
	}
	cout<<ans<<endl;
	return 0;
}
