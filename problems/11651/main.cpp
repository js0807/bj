#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
using pii = pair<int,int>;

void init(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
} 

bool compare(pii a,pii b){
	if(a.second==b.second) return a.first < b.first;
	else return a.second < b.second;
}

int main(){
	init();
	int n,i;
	cin>>n;
	vector<pii> v(n);
	for(auto& [x,y]:v) cin>>x>>y;
	sort(v.begin(),v.end(),compare);
	for(auto& [x,y]:v) cout<<x<<" "<<y<<"\n";
	return 0;
}
