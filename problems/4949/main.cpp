#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	while(true){
		int cnt=0;
		string s;
		stack<char> stk;
		stk.push('0');
		getline(cin,s);
		if(s.size()==1 && s==".") break;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(' or s[i]=='[') stk.push(s[i]);
			if(s[i]==')' or s[i]==']') cnt++;
			if(stk.top()=='(' and s[i]==')'){
				stk.pop();
				cnt--;
			}
			if(stk.top()=='[' and s[i]==']'){
				stk.pop();
				cnt--;
			}
		}
		if(stk.size()<=1 && cnt==0) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
