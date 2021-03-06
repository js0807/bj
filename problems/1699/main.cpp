#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100000

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int dp[MAX+1],n;

int main(){
	init();
	cin>>n;
	fill_n(dp,n+1,5);
	dp[0]=0; dp[1]=1; dp[2]=2,dp[3]=3;
	for(int i=4;i<=n;i++){
		for(int j=1;j*j<=n;j++){
			int k=i-j*j;
			dp[i]=min(dp[i],dp[k]+1  );
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}
