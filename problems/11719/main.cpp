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
	string s="";
	while(!cin.eof()){
		string tmp;
		getline(cin,tmp);
		s+=tmp;
		s+="\n";
	}
	s.pop_back();
	cout<<s;
	
	return 0;
}
