#include <iostream>
#include <cmath>

#define MAX 1000000

using namespace std;

int a[MAX];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void sieve(){
	int i,j;
	for(i=2;i<MAX;i++){
		if(a[i-1]==0){
			for(j=i+1;j<sqrt(MAX);j++){
				if(j%i==0) a[j-1]++;
			}
		}
	}
}

int main(){
	init();
	sieve();
	int m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(a[i-1]==0) cout<<i<<"\n";
	}

	return 0;
}
