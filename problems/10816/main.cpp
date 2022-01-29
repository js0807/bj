#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

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
	unordered_multiset<int> ums;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		ums.insert(a);
	}

	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		cout<<ums.count(a)<<" ";
	}

	return 0;
}
