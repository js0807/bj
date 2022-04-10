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

int dp[301];
vector<int> v;

int main(){
	init();
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		int a; cin>>a;
		v.push_back(a);
	}
	dp[1]=v[0]; dp[2]=v[0]+v[1];
	bool flag=true;
	for(int i=3;i<=n;i++){
		dp[i]=max({dp[i-1],dp[i-2]})+v[i-1];
	}

	cout<<dp[n]<<endl;

	return 0;
}
