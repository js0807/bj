#include <iostream>
#include <string>
#include <algorithm>

#define MAX 1000000

using namespace std;

int a[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,k,cnt=0,i;
	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	i=n-1;
	while(k>0){
		if(k>=a[i]){
			k-=a[i];
			cnt++;
		}
		else i--;
	}
	
	cout<<cnt<<endl;

	return 0;
}
