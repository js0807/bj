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
	int n,i,min=10000;
	cin>>n;
	for(i=0;i<n;i++){
		int a; cin>>a;
		if(a<min) min=a;
	}
	cout<<min*n<<endl;
	return 0;
}
