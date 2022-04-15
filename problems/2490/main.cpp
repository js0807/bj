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
	for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<4;j++){
			int a; cin>>a;
			sum+=a;
		}
		if(sum==0) cout<<"D\n";
		if(sum==1) cout<<"C\n";
		if(sum==2) cout<<"B\n";
		if(sum==3) cout<<"A\n";
		if(sum==4) cout<<"E\n";
	}
	return 0;
}
