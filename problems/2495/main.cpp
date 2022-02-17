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
	string s;
	for(int i=0;i<3;i++){
		cin>>s;
		s.push_back('a');
		int max=0,cnt=1;
		for(int j=0;j<8;j++){
			if(s[j]==s[j+1]) cnt++;
			else{
				if(cnt>max) max=cnt;
				cnt=1;
			}
		}
		cout<<max<<endl;
	}

	return 0;
}
