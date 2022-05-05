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
	int *arr = new int[t];
	int *brr = new int[t];
	for(int i=0;i<t;i++){
		cin>>arr[i];
	}
	for(int i=0;i<t;i++){
		cin>>brr[i];
	}
	long long sum=0;
	for(int i=0;i<t;i++){
		if(brr[i]-arr[i]==30) sum+=(brr[i]-arr[i])/30;
		else if(brr[i]-arr[i]>0) sum+=(brr[i]-arr[i])/30+1;
	}
	cout<<sum<<endl;
	return 0;
}
