#include <iostream>
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
	int a,b;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		cout<<a+b<<"\n";
	}
	return 0;
}
