#include <iostream>
#include <string>
#include <stack>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		string s;
		stack<char> stk;
		stk.push('0');
		cin>>s;
		for(j=0;j<s.length();j++){
			if((s[j]==')')&&(stk.top()=='(')){
				stk.pop();
			}
			else stk.push(s[j]);
		}
		if(stk.size()<=1) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
