#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

#define MAX 100000

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

vector<int> dp(MAX+1);

int main(){
	init();
	int n;
	cin>>n;
	fill_n(dp.begin(),n+1,MAX);
	dp[0]=0;
	for(int i=1;i*i<=n;i++){
		dp[i*i]=1;
	}
	
	for(int i=1;i<=n;i++){
		int min=MAX;
		for(int j=0;j<=i/2;j++){
			int sum=dp[j]+dp[i-j];
			if(sum<min) min=sum;
		}
		dp[i]=min;
	}
	
	cout<<dp[n]<<endl;

	return 0;
}
