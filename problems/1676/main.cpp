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
	int n,div5,div25,div125;
	cin>>n;
	div5=n/5;
	div25=n/25;
	div125=n/125;
	/* time out
	for(int i=n-1;i>=2;i--){
		n*=i;
	}
	while(n%10==0){
		n/=10;
		cnt++;
	}
	*/
	cout<<div5+div25+div125<<endl;
	return 0;
}
