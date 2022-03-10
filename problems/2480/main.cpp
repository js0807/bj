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
	int a[3],ans;
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if(a[0]==a[1] and a[1]==a[2]) ans=10000+a[1]*1000;
	else if(a[0]!=a[1] and a[1]!=a[2] and a[0]!=a[2]) ans=a[2]*100;
	else{
		if(a[0]==a[1]) ans=a[1];
		else if(a[1]==a[2]) ans=a[2];
		else ans=a[2];
		ans=ans*100+1000;
	}
	cout<<ans<<endl;
	return 0;
}
