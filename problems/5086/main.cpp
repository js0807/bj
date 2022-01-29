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
	int a,b;
	while(true){
		cin>>a>>b;
		if(a==0 and b==0) break;
		if(b%a==0) cout<<"factor\n";
		if(a%b==0) cout<<"multiple\n";
		if(b%a!=0 and a%b!=0) cout<<"neither\n";
	}
	return 0;
}
