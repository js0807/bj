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

int a[101];

int main(){
	init();
	int n,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int b;
		cin>>b;
		a[b]++;
		if(a[b]>1) cnt++;
	}

	cout<<cnt<<endl;
	return 0;
}
