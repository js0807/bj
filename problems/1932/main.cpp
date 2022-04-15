#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n;
	cin>>n;
	vector<long long> dp[n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			int a; cin>>a;
			dp[i].push_back(a);
		}
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<i;j++){
			if(j==0) dp[i][j]+=dp[i-1][j];
			else if(j==i-1) dp[i][j]+=dp[i-1][j-1];
			else{
				dp[i][j]+=max(dp[i-1][j-1],dp[i-1][j]);
			}
		}
	}
	int maxi=0;
	for(int i=1;i<=n;i++){
		if(dp[n][i]>maxi) maxi=dp[n][i];
	}
	if(n==1) maxi=dp[1][0];
	cout<<maxi<<endl;
	return 0;
}
