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

int dpz[42]={1,0,};
int dpo[42]={0,1,};

int fiboz(int n){
	if(n==1) return 0;
	if(dpz[n]!=0) return dpz[n];
	dpz[n]=fiboz(n-1)+fiboz(n-2);
	return dpz[n];
}

int fiboo(int n){
	if(n==0) return 0;
	if(dpo[n]!=0) return dpo[n];
	dpo[n]=fiboo(n-1)+fiboo(n-2);
	return dpo[n];
}

int main(){
	init();
	int t,n,ans;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		cout<<fiboz(n)<<' '<<fiboo(n)<<'\n';
	}

	return 0;
}
