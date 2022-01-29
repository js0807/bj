#include <iostream>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		if(i%2==1) cout<<" ";
		for(j=0;j<n*2;j++){
			if(j%2==1) cout<<" ";
			else cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
