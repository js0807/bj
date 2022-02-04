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

int dp[40];
int zcnt,ocnt;

int fibo(int n){
	if(dp[n]!=0) return dp[n];
	dp[n]=fibo(n-1)+fibo(n-2);
	return dp[n];
}

int main(){
	init();
	dp[0]=1; dp[1]=1;
	int t,n,ans;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		ans=fibo(n);
		cout<<ans<<"\n";
		zcnt=0;ocnt=0;
	}

	return 0;
}
