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

long long int dp[91];

long long int cnt(int n){
	if(n<=2) return 1;
	if(dp[n]!=0) return dp[n];
	dp[n]=cnt(n-1)+cnt(n-2);
	return dp[n];
}

int main(){
	init();
	int n;
	cin>>n;
	cout<<cnt(n)<<endl;
	return 0;
}
