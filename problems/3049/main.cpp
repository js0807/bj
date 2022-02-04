#include <iostream>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n;
	int ans=1;
	cin>>n;
	/*
	for(int i=3;i<n;i++){
		if(i==3) ans+=1;
		else ans+=4*cnt;
		cnt++;
	}
	if(n%2==0 and n!=4) ans+=2;
	cout<<ans<<endl;
	*/
	for(int i=n;i>n-4;i--){
		ans*=i;
	}

	cout<<ans/24<<endl;
	return 0;
}
