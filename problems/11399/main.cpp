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
	int n,sum=0;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	for(int i=1;i<n;i++){
		arr[i]+=arr[i-1];
	}
	for(auto k:arr){
		sum+=k;
	}
	cout<<sum<<endl;
	return 0;
}
