#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100

using namespace std;

int graph[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		graph[a][b]=1;
		graph[b][a]=1;
	}
	
	int *result = new int[n+1];
	fill_n(result,n+1,0);
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(graph[i][j] or (graph[i][k] and graph[k][j])) result[k]++;
			}
		}
	}
	
	int maxi=-1,ans;
	for(int k=1;k<=n;k++){
		if(result[k]>maxi){
			maxi=result[k];
			ans=k;
		}
	}

	cout<<ans<<endl;
	return 0;
}
