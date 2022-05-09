#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	stack<char> stk;
	string s,w,ans="";
	bool flag=false;
	cin>>s>>w;
	stk.push('!');
	for(int i=0;i<s.size();i++){
		if(s[i]=='4' and stk.top()=='C') stk.pop();
		else stk.push(s[i]);
	}
	if(stk.size()<=1) cout<<"FRULA\n";
	else{
		while(!stk.empty()){
			ans+=stk.top();
			stk.pop();
		}
		for(int i=ans.size()-2;i>=0;i--){
			cout<<ans[i];
		} cout<<'\n';
	}
	return 0;
}
