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

int dp[50001]={0,1,1,1,1,};

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
	int n;
	cin>>n;
	for(int i=1;i*i<=n;i++) dp[i*i]=1;
	
	for(int i=1;i<=n;i++){
		if(dp[i]!=0) continue;
		vector<int> v;
		for(int j=1;j<=n/2;j++){
			v.push_back(j);
		}
		dp[i]=*min_element(v.begin(),v.end());
	}

	cout<<dp[n]<<endl;

	return 0;
}
