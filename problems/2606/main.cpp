#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100

using namespace std;

int n,m;
vector<int> graph[MAX+1];
bool v[MAX+1];
int sum=0;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dfs(int x){
	v[x]=true;
	for(auto k:graph[x]){
		if(!v[k]){
			dfs(k);
			sum++;
		}
	}
}

int main(){
	init();
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	dfs(1);
	cout<<sum<<endl;
	return 0;
}
