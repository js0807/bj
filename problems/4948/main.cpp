#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 246912

using namespace std;

int prime[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void make_prime(){
	for(int i=2;i<=MAX;i++){
		prime[i]=i;
	}
	for(int i=2;i<=MAX;i++){
		if(prime[i]==0) continue;
		for(int j=i*2;j<=MAX;j+=i){
			prime[j]=0;
		}
	}
}

int main(){
	init();
	make_prime();
	int n=-1;
	while(true){
		int cnt=0;
		cin>>n;
		if(n==0) break;
		for(int i=n+1;i<=2*n;i++){
			if(prime[i]) cnt++;
		}
		cout<<cnt<<'\n';
	}
	return 0;
}
