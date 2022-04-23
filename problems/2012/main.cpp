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
	int n;
	cin>>n;
	int *arr = new int[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long sum=0;
	for(int i=1;i<=n;i++){
		sum+=abs(arr[i-1]-i);	
	}
	cout<<sum<<endl;
	return 0;
}
