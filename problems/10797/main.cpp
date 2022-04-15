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
	int n,sum=0;
	cin>>n;
	for(int i=0;i<5;i++){
		int a; cin>>a;
		if(n==a) sum++;
	}
	cout<<sum<<endl;
	return 0;
}
