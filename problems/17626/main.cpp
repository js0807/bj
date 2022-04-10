#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int dp[50001];

/*
// top-down greedy
int mini(int n){
	int root = (int)floor(sqrt(n));
	if(dp[n]!=0) return dp[n];
	dp[n]=mini(n-root*root)+1;
	return dp[n];
}
*/

int main(){
	init();
	int n,i,j;
	cin>>n;
	for(i=1;i*i<=n;i++) dp[i*i]=1;
	
	for(i=1;i<=n;i++){
		int minn=INT32_MAX;
		for(j=1;j*j<=i;j++){
			int tmp=i-j*j;
			minn=min(minn,dp[tmp]);
		}
		dp[i]=minn+1;
	}

	cout<<dp[n]<<endl;

	return 0;
}
