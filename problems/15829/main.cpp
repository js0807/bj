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
	unsigned long long int hash=0;
	unsigned long long int mul=1;
	unsigned long long int m = 1234567891;
	cin>>n;
	for(i=0;i<n;i++){
		char c;
		cin>>c;
		hash=(hash+(c-96)*mul)%m;
		mul=(mul*31)%m;
	}
	cout<<hash<<endl;

	return 0;
}
