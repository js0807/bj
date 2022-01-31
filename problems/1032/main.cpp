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
	int n;
	cin>>n;

	string ans;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(i==0) ans=s;
		else{
			for(int j=0;j<s.size();j++){
				if(ans[j]!=s[j]) ans[j]='?';
			}
		}
	}
	
	cout<<ans<<endl;

	return 0;
}
