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
	long long n,cnt=0;
	cin>>n;
	for(long long i=1;i<=n;i++){
		n-=i;
		cnt++;
		if(n<=0) break;
	}
	cout<<cnt<<endl;

	return 0;
}
