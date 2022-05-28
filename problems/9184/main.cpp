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
	while(true){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==-1 and b==-1 and c==-1) break;
		if(a<=0 or b<=0 or c<=0) cout<<"1\n";
	}
	return 0;
}
