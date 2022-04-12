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
		for(int j=0;j<i+1;j++){
			cout<<'*';
		}
		cout<<'\n';
	}
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			cout<<'*';
		}
		cout<<'\n';
	}
	return 0;
}
