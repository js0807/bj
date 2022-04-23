#include <cstdint>
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
	int n,mini=INT32_MAX;
	cin>>n;
	int *arr = new int[2*n+1];
	for(int i=0;i<2*n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+2*n);
	for(int i=0;i<n;i++){
		int sum=arr[i]+arr[2*n-1-i];
		if(sum<mini) mini=sum;
	}
	cout<<mini<<endl;
	return 0;
}
