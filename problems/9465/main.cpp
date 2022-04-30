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
	int t;
	cin>>t;
	int *arr = new int[t];
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int dp[2][n];
		for(int j=0;j<2;j++){
			for(int k=0;k<n;k++){
				cin>>dp[j][k];
			}
		}
		for(int j=1;j<n;j++){
			for(int k=0;k<2;k++){
				if(k==0) dp[k][j]+=dp[k+1][j-1];
				else dp[k][j]+=dp[k-1][j-1];
			}
		}
		arr[i]=max(dp[0][n-1],dp[1][n-1]);
	}
	for(int i=0;i<t;i++){
		cout<<arr[i]<<'\n';
	}

	return 0;
}
