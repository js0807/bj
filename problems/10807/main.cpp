#include <iostream>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,sum=0;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int v;
	cin>>v;
	for(int i=0;i<n;i++){
		if(a[i]==v) sum++;
	}
	cout<<sum<<endl;
	return 0;
}
