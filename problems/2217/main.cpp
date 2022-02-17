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
	int n,i,min=10000;
	cin>>n;
	vector<int> v(n);
	vector<int> ans;
	for(i=0;i<n;i++){
		cin>>v[i];
	}
	

	return 0;
}
