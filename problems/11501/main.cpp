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
	for(int i=0;i<t;i++){
		int n,maxi=0;
		long long sum=0;
		cin>>n;
		int *arr = new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(maxi<arr[i]) maxi=arr[i];
		}
		for(int i=0;i<n;i++){
			if(arr[i]<maxi){
				
			} else{
				
			}
		}
	}

	return 0;
}
