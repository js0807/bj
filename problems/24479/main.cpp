#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100000

using namespace std;

int n,m,r,ans;
vector<int> v[MAX+1];
bool visited[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void reset(){
	for(int i=0;i<=MAX;i++) visited[i]=false;
}

void dfs(int x,int e,int d){
	if(x==e) ans=d;
	visited[x]=true;
	for(auto k:v[x]){
		if(!visited[k]) dfs(k,e,d+1);
	}
}

int main(){
	init();
	cin>>n>>m>>r;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=0;i<n;i++){
		sort(v[i].begin(),v[i].end());
	}
	for(int i=1;i<=n;i++){
		dfs(1,i,1);
		cout<<ans<<'\n';
		ans=0;
		reset();
	}
	return 0;
}
