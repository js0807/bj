#include <iostream>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int fibo(int n){
	if(n<=2) return 1;
	return fibo(n-1)+fibo(n-2);
}

int main(){
	init();
	int n;
	cin>>n;
	if(n<=0) cout<<0<<endl;
	else cout<<fibo(n)<<endl;
	return 0;
}
