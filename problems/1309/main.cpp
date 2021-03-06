#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100000

using namespace std;

int dp[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n;
	cin>>n;
	dp[1]=3; dp[2]=7;
	for(int i=3;i<=n;i++){
		dp[i]=(dp[i-1]*2+dp[i-2])%9901;
	}
	cout<<dp[n]<<endl;
	return 0;
}
