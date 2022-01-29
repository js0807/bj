#include <iostream>
#include <string>
#include <algorithm>
#include <set>

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
	set<int> s;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		s.insert(a);
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		if(s.find(a)==s.end()) cout<<"0\n";
		else cout<<"1\n";
	}

	return 0;
}
