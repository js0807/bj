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
	long long dp[101]={0,1,1,1,2,2,3,4,5,7,9,12,},t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		for(int j=6;j<=n;j++){
			if(!dp[j]) dp[j]=dp[j-5]+dp[j-1];
		}
		cout<<dp[n]<<'\n';
	}

	return 0;
}
