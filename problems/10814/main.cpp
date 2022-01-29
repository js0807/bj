#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
using pis=pair<int,string>;

bool compare(pis a, pis b) {
	return a.first < b.first;
}

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i=0;
	cin>>n;
	vector<pis> v(n);
	
	for(auto& [x,y]:v) cin>>x>>y;
	
	stable_sort(v.begin(),v.end(),compare);
	
	for(auto& [x,y]:v) cout<<x<<" "<<y<<"\n";

	return 0;
}
