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
	int ans=0,index=0,i=0,j;
	string s,ss;
	getline(cin,s);
	getline(cin,ss);
	while(i<s.size()){
		int cnt=0;
		for(j=0;j<ss.size();j++){
			if(s[i+j]==ss[j]){
				cnt++;
			}
		}
		if(cnt==ss.size()){
			ans++;
			i+=j;
		}
		else i++;
	}
	cout<<ans<<endl;
	return 0;
}
