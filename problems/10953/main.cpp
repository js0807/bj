#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

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
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		cout<<(s[0]-'0')+(s[2]-'0')<<'\n';
	}
	return 0;
}
