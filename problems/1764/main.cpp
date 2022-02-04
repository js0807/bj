#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,m;
	multiset<string> ms;
	set<string> ans;

	cin>>n>>m;


	for(int i=0;i<n+m;i++){
		string s;
		cin>>s;
		ms.insert(s);
	}

	for(auto k:ms){
		if(ms.count(k)>1) ans.insert(k);
	}
	
	cout<<ans.size()<<endl;

	for(auto k:ans){
		cout<<k<<"\n";
	}

	return 0;
}
