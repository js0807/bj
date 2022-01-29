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
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,m,cnt=0;
		cin>>n>>m;
		for(int j=n;j<=m;j++){
			string s=to_string(j);
			for(int k=0;k<s.size();k++){
				if(s[k]=='0') cnt++;
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}
