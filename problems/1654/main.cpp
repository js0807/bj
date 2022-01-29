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
int k,n;

bool test(long long mid){
	long long cnt=0;
	for(int i=0;i<k;i++){
		cnt+=a[i]/mid;
	}
	if(cnt<n) return true;
	else return false;
}

void function(long long low, long long high){
	if(low>=high){
		cout<<low<<endl;
		return;
	}
	else{
		long long mid = (low+high)/2+1;
		bool result = test(mid);

		if(result) function(low,mid-1);
		else function(mid,high);
		
	}
}

int main(){
	init();
	cin>>k>>n;

	long long low=0, high=0;
	for(int i=0;i<k;i++){
		cin>>a[i];
		if(a[i]>high) high=a[i];
	}
	
	function(low,high);

	return 0;
}
