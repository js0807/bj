#include <iostream>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int f(int n){
	if(n<=1) return 1;
	return n*f(n-1);
}

int main(){
	init();
	int n;
	cin>>n;
	if(n==0) cout<<1<<endl;
	else cout<<f(n)<<endl;
	return 0;
}
