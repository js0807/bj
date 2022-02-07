#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,m;
	cin>>n>>m;
	map<string,string> site;
	for(int i=0;i<n;i++){
		string s1,s2;
		cin>>s1>>s2;
		site.insert({s1,s2});
	}
	for(int i=0;i<m;i++){
		string s;
		cin>>s;
		cout<<site.find(s)->second<<'\n';
	}

	return 0;
}
