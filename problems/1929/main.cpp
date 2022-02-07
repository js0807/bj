#include <iostream>
#include <cmath>

#define MAX 1000000

using namespace std;

bool a[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	a[0]=1; a[1]=1;
	long long int m,n,i,j;
	cin>>m>>n;
	for(i=2;i<=sqrt(MAX);i++){
		for(j=2;i*j<=MAX;j++){
			a[i*j]=true;
		}
	}
	for(i=m;i<=n;i++){
		if(!a[i]) cout<<i<<'\n';
	}

	return 0;
}
