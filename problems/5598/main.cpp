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
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		s[i]-=3;
		if(s[i]<65) s[i]+=26;
	}

	cout<<s<<endl;

	return 0;
}
