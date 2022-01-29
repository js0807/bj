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
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A' and s[i]<='C') sum+=3;
		if(s[i]>='D' and s[i]<='F') sum+=4;
		if(s[i]>='G' and s[i]<='I') sum+=5;
		if(s[i]>='J' and s[i]<='L') sum+=6;
		if(s[i]>='M' and s[i]<='O') sum+=7;
		if(s[i]>='P' and s[i]<='S') sum+=8;
		if(s[i]>='T' and s[i]<='V') sum+=9;
		if(s[i]>='W' and s[i]<='Z') sum+=10;
	}
	cout<<sum<<endl;
	return 0;
}
