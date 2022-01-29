#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,sum=0,cnt=0;;
	cin>>n;
	int k=n,i_n=n;
	while(true){
		sum+=n%10;
		n/=10;
		if(n==0){
			//cout<<"sum : "<<sum<<"\n";
			n=((i_n%10)*10)+(sum%10);
			//cout<<"new n : "<<n<<"\n";
			i_n=n;
			sum=0;
			cnt++;	
		}
		if(k<10){
			if(k==i_n) break;
		}
		else if(k==n) break;
	}
	cout<<cnt<<endl;
	return 0;
}
