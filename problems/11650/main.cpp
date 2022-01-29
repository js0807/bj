#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
using pii = pair<int,int>;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i;
	cin>>n;
	vector<pii> v(n);
	for(auto& [x,y]:v) cin>>x>>y;
	sort(v.begin(),v.end());
	for(i=0;i<n;i++){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
	return 0;
}
