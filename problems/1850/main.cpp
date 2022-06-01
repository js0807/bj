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
	long long a,b;
	string s;
	cin>>a>>b;
	if(a>b) swap(a,b);
	for(int i=0;i<__gcd(a,b);i++){
		s.push_back('1');
	}
	cout<<s<<endl;

	return 0;
}
