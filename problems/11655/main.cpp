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
	string s;
	
	getline(cin,s);
	
	for(int i=0;i<s.size();i++){
		if(s[i]<=90 and s[i]>=65){
			s[i]+=13;
			if(s[i]>90) s[i]-=26;
		}
		
		if(s[i]<=122 and s[i]>=97){
			if(s[i]>110) s[i]-=26;
			s[i]+=13;
			if(s[i]>122) s[i]-=26;
		}
	}

	cout<<s<<endl;
	
	return 0;
}
