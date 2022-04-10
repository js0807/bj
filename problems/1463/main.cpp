#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 1000000

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int dp[MAX+1]={0,1,1,};

int count(int n){
	if(n==1) return 0;
	if(dp[n]!=0) return dp[n];
	else{
		int a,b;
		if(n%3==0) a=count(n/3);
		else a=INT32_MAX;

		if(n%2==0) b=count(n/2);
		else b=INT32_MAX;
		
		dp[n]=min({count(n-1),b,a})+1;
		return dp[n];
	}
}

int main(){
	init();
	int n;
	cin>>n;
	cout<<count(n)<<endl;
	return 0;
}
