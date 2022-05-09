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
	string s,w;
	cin>>s>>w;
	while(true){
		bool flag=false;
		for(int i=0;i<s.size();i++){
			if(s[i]==w[0]){
				for(int j=0;j<w.size();j++){
					if(s[i+j]==w[j]) flag=true;
					else flag=false;
				}
				if(flag){
					for(int j=i;j<i+w.size();j++) s[j]=' ';
				}
			}
		}
		s.erase(remove(s.begin(),s.end(),' '), s.end());
		if(!flag) break;
	}
	if(s.size()==0) cout<<"FRULA\n";
	else cout<<s<<endl;
	return 0;
}
