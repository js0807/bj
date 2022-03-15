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
	int a,b,c;
	cin>>a>>b>>c;
	a+=c/60;
	b+=c%60;
	a+=b/60;
	b%=60;
	if(a>23) a-=24;
	cout<<a<<' '<<b<<endl;
	return 0;
}
