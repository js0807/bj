#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100

using namespace std;

int n,m;
vector<int> graph[MAX+1];
bool visited[MAX];
int sum_b=0;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dfs(int x){
	visited[x]=true;
	for(auto k:graph[x]){
		if(!visited[k]){
			dfs(k);
		} 
	}
}

int dfsum(int x){
	int sum=0;
	for(int i=1;i<=n;i++){
		dfs(i);
	}
	return sum;
}

int main(){
	init();
	int min;
	cin>>n>>m;
	min=n;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for(int i=n;i>=1;i--){
		int result=dfsum(i);
		if(result<min) min=i;
	}
	cout<<min<<endl;
	return 0;
}
