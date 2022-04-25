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
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int dp[2][n];
		for(int j=0;j<2;j++){
			for(int k=0;k<n;k++){
				cin>>dp[i][j];
			}
		}
	}

	return 0;
}
