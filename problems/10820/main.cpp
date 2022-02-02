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
	while(true){
		string s;
		getline(cin,s);
		if(cin.eof()) break;
		int cnt[4]={0,};
		for(int i=0;i<s.size();i++){
			if(s[i]<=122 and s[i]>=97) cnt[0]++;
			if(s[i]<=90 and s[i]>=65) cnt[1]++;
			if(s[i]<=57 and s[i]>=48) cnt[2]++;
			if(s[i]==' ') cnt[3]++;
		}

		for(int i=0;i<4;i++){
			cout<<cnt[i]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}
