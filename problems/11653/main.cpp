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
	int n,i=2;
	cin>>n;
	if(n!=1){
		while(n>1){
			if(n%i==0){
				cout<<i<<"\n";
				n/=i;
			} else i++;
		}
	}
	return 0;
}
