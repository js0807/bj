#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n,arr[1001];
int dp[1001];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	return 0;
}
