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
	int ans[6];
	int piece[6]={1,1,2,2,2,8};
	for(int i=0;i<6;i++){
		int a; cin>>a;
		ans[i]=piece[i]-a;
	}
	for(int i=0;i<6;i++){
		cout<<ans[i]<<' ';
	}
	cout<<endl;

	return 0;
}
