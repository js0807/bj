#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i;
	long long unsigned int hash=0;
	cin>>n;
	for(i=0;i<n;i++){
		char c;
		cin>>c;
		hash+=(int)(c-96)*pow(31,i);
	}
	cout<<hash<<endl;

	return 0;
}
