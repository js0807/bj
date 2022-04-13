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
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<' ';
		}
		for(int j=2*(n-i)-1;j>0;j--){
			cout<<'*';
		}
		cout<<'\n';
	}
	for(int i=1;i<n;i++){
		for(int j=n-1;j>i;j--){
			cout<<' ';
		}
		for(int j=0;j<2*(i+1)-1;j++){
			cout<<'*';
		}
		cout<<'\n';
	}
	return 0;
}
