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
		int cnt=0;
		bool a[10]={false};
		string s;
		cin>>s;
		for(int j=0;j<s.size();j++){
			a[s[j]-'0']=true;
		}
		for(int j=0;j<10;j++){
			if(a[j]) cnt++;
		}
		cout<<cnt<<'\n';
	}
	return 0;
}
