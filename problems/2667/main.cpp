#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 25

using namespace std;

int n,sum=0;
int graph[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int dfs(int x, int y){
	if(x<0 or x>n or y<0 or y>n) return 0;
	if(graph[x][y]){
		graph[x][y]=0;
		dfs(x-1,y);
		dfs(x+1,y);
		dfs(x,y-1);
		dfs(x,y+1);
		return sum+=1;
	}
	return 0;
}

int main(){
	vector<int> r;
	int result=0;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1d",&graph[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int ans=dfs(i,j);
			sum=0;
			if(ans){
				r.push_back(ans);
				result++;
			}
		}
	}
	sort(r.begin(),r.end());
	printf("%d\n",result);
	for(auto k:r){
		printf("%d\n",k);
	}
	return 0;
}
