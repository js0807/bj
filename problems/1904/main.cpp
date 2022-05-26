#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 1000000

using namespace std;

int dp[MAX+1]={0,1,2,2,};

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n;
	cin>>n;
	for(int i=4;i<=n;i++){
		dp[i]=(dp[i-1]+dp[i-2])%15746;
	}
	cout<<dp[n]<<endl;
	return 0;
}
