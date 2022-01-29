#include <iostream>
#include <algorithm>
#include <unordered_map>

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
	unordered_map<int,int> um;
	for(int i=0;i<n;i++){
		int a,cnt;
		cin>>a;
		um[a]++;
	}

	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		cout<<um[a]<<" ";
	}

	return 0;
}
