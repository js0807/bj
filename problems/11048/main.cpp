#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int dp[1001][1001];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void show(int n, int m){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<dp[i][j]<<' ';
		}
		cout<<'\n';
	}
}

int main(){
	init();
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>dp[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j]+=max({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]});
			show(n,m);
		}
	}
	cout<<dp[n][m]<<endl;
	return 0;
}
