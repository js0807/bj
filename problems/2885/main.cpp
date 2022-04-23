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
	int n,s=1,d;
	cin>>n;
	while(s<n){
		s*=2;
	}

	cout<<s<<d<<endl;
	return 0;
}
