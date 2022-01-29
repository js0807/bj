#include <iostream>
#include <string>
#include <algorithm>

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
		int *a = new int[10];
		for(int j=0;j<10;j++){
			cin>>a[j];
		}
		sort(a,a+10);
		cout<<a[7]<<endl;
	}
	return 0;
}
