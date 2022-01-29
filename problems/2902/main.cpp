#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	string s,ans;
	cin>>s;
	ans+=s[0];
	for(int i=0;i<s.size();i++){
		if(s[i]=='-') ans+=s[i+1];
	}
	cout<<ans<<endl;

	return 0;
}
