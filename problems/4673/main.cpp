#include <iostream>
#include <string>
#include <algorithm>

#define MAX 10000

using namespace std;

int a[MAX+100];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void func(int n){
	if(n>10000) return;
	int sum=0;
	if(sum==0) sum+=n;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	a[sum]++;
	func(sum);
}

int main(){
	init();
	int i;
	for(i=1;i<=MAX;i++){
		if(a[i]==0) func(i);
	}
	for(i=1;i<=MAX;i++){
		if(a[i]==0) cout<<i<<"\n";
	}
	return 0;
}
