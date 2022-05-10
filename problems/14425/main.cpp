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
	int n,m,cnt=0;
	set<string> s;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		s.insert(str);
	}
	for(int i=0;i<m;i++){
		string str;
		cin>>str;
		if(s.find(str)!=s.end()) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
