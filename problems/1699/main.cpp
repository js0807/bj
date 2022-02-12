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

int dp[MAX+1];

int main(){
	init();
	int n;
	cin>>n;
	for(int i=1;i<=sqrt(n);i++){
		dp[i*i]=1;
	}

	int num,cnt;
	for(int i=1;i<=n;i++){
		if(dp[i]==1){
			num=1;
			cnt=1;
		} else{
			if(cnt>3){
				cnt=0;
				num++;
			}
			dp[i]=num+(cnt++);
		}
	}
	
	cout<<dp[n]<<endl;

	return 0;
}
