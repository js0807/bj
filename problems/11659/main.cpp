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
	int n,m;
	cin>>n>>m;
	int *a = new int[n+1];
	int *sum = new int[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=a[i];
	}
	for(int i=2;i<=n;i++){
		sum[i]+=sum[i-1];
	}
	for(int i=0;i<m;i++){
		int b,e,sum1=0,sum2=0;
		cin>>b>>e;
		cout<<sum[e]-sum[b-1]<<'\n';
	}

	return 0;
}
