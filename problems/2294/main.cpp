#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int graph[101],ans=-1;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void bfs(int n, int k){
	queue<pair<int,int>> q;
	q.push({0,0});
	while(!q.empty()){
		int x=q.front().first;
		int t=q.front().second;
		q.pop();
		if(x==k){ans=t;break;}
		for(int i=0;i<n;i++){
			q.push({x+graph[i],t+1});		
		}
	}
}

int main(){
	init();
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>graph[i];
	}
	bfs(n,k);
	cout<<ans<<endl;
	return 0;
}
