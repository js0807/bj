#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100

using namespace std;

int n;
bool graph[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

bool dfs(int base, int next){
	if(base==next) return true;
	else{
		for(int i=1;i<=n;i++){
			dfs(base,i);
		}
	}
}

int main(){
	init();
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>graph[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int flag;
			if(dfs(i,j)) flag=1;
			else flag=0;
			cout<<flag<<' ';
		}
		cout<<'\n';
	}
	return 0;
}
