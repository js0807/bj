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
	int n,r;
	cin>>n>>r;
		
	for(int i=0;i<n-1;i++){
		int a,max;
		cin>>a;
		for(int j=1;j<=a;j++){
			if(r%j==0 and a%j==0) max=j;
		}
		cout<<r/max<<"/"<<a/max<<"\n";
	}
	return 0;
}
