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
	int dp[1001]={0,1,3,},n;
	cin>>n;
	for(int i=3;i<=n;i++){
		if(!dp[i]) dp[i]=(dp[i-1]+dp[i-2]*2)%10007;
	}
	cout<<dp[n]<<endl;
	return 0;
}
