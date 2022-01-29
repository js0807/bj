#include <iostream>
#include <string>
#include <algorithm>

#define MAX 10000

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

long long a[MAX];

long long check(long long mid, int k){
	long long cnt=0;
	for(int i=0;i<k;i++){
		cnt+=a[i]/mid;
	}
	
	return cnt;
}

int main(){
	init();
	int k,n;
	cin>>k>>n;

	long long right=0,left=0;
	for(int i=0;i<k;i++){
		cin>>a[i];
		if(a[i]>right) right=a[i];
	}

	long long mid=0,cnt;
	while(left<right){
		
		mid=(right+left)/2+1;
		
		cnt=check(mid,k);

		if(cnt<n) right=mid-1;
		else left=mid;
	}
	
	cout<<mid<<endl;

	return 0;
}
