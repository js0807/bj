#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

stack<char> stk;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

string top_n(int n){
	string tmp="";
	for(int i=0;i<n;i++){
		char t=stk.top();
		tmp+=t;
		stk.pop();
	}
	for(int i=n-1;i>=0;i--){
		stk.push(tmp[i]);
	}
	reverse(tmp.begin(),tmp.end());
	return tmp;
}

void pop_n(int n){
	for(int i=0;i<n;i++){
		stk.pop();
	}
}

int main(){
	init();
	int cnt=0,siize;
	string s,w,ans="";
	cin>>s>>w;
	siize=w.size();
	for(int i=0;i<s.size();i++){
		stk.push(s[i]);
		cnt++;
		if(cnt>=siize and top_n(siize)==w){
			pop_n(w.size());
			cnt-=siize;
		}
	}
	if(stk.size()<=1) cout<<"FRULA\n";
	else{
		while(!stk.empty()){
			ans+=stk.top();
			stk.pop();
		}
		for(int i=ans.size()-1;i>=0;i--){
			cout<<ans[i];
		} cout<<'\n';
	}
	return 0;
}
