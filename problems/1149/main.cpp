#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int dp[1001][1001];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=3;j++){
			cin>>dp[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=3;j++){
			int arr[2];
			if(j==1){
				arr[0]=dp[i-1][j+1];
				arr[1]=dp[i-1][j+2];
			}
			if(j==2){
				arr[0]=dp[i-1][j-1];
				arr[1]=dp[i-1][j+1];
			}
			if(j==3){
				arr[0]=dp[i-1][j-1];
				arr[1]=dp[i-1][j-2];
			}
			dp[i][j]+=min({arr[0],arr[1]});
		}
	}
	cout<<min({dp[n][1],dp[n][2],dp[n][3]})<<endl;
	return 0;
}
