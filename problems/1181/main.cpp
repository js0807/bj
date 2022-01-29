#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string s1,string s2){
	if(s1.size() == s2.size()) return s1 < s2;
	return s1.size() < s2.size();
}

int main(){
	int n,i;
	cin>>n;
	string *s = new string[n];
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n,compare);
	for(i=0;i<n;i++){
		if(s[i]!=s[i+1]) cout<<s[i]<<endl;
	}
	return 0;
}
