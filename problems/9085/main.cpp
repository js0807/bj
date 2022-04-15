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
		int n,sum=0;
		cin>>n;
		for(int i=0;i<n;i++){
			int num; cin>>num;
			sum+=num;
		}
		cout<<sum<<'\n';
	}

	return 0;
}
