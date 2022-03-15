#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		map<string,string> m;
		cin>>n;
		for(int j=0;j<n;j++){
			string a,c;
			cin>>a>>c;
			m.insert({a,c});
		}
	}
	return 0;
}
