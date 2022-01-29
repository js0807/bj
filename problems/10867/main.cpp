#include <iostream>
#include <set>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i;
	set<int> s;

	cin>>n;
	for(i=0;i<n;i++){
		int a;
		cin>>a;
		s.insert(a);
	}

	for(auto r : s) cout<<r<<" ";
	return 0;
}
