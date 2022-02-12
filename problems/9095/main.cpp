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

int dp[11]={1,2,4,};

int main(){
	init();
	int n,max=0;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i]>max) max=v[i];
	}
	for(int i=3;i<=max;i++){
		// code upgrade
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
		/*
		dp[i+1]+=dp[i];
		dp[i+2]+=dp[i];
		dp[i+3]+=dp[i];
		*/
	}
	for(auto k:v) cout<<dp[k-1]<<endl;
	return 0;
}
