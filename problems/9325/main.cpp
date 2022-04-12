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
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int price,options,sum=0;
		cin>>price>>options;
		for(int j=0;j<options;j++){
			int q,p;
			cin>>q>>p;
			sum+=q*p;
		}
		sum+=price;
		cout<<sum<<'\n';
	}

	return 0;
}
