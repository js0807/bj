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
	int a[31]={0};
	for(int i=0;i<28;i++){
		int num;
		cin>>num;
		a[num]++;
	}
	for(int i=1;i<=30;i++){
		if(a[i]==0) cout<<i<<endl;
	}

	return 0;
}
