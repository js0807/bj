#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 8

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,m,i,j;
	cin>>n>>m;

	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			cout<<i<<' '<<j<<'\n';
		}
	}

	return 0;
}
