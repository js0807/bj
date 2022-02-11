#include <iostream>
#include <cmath>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

bool range[50001]={false};

int main(){
	init();
	int n,cnt=0,i;
	cin>>n;
	i=floor(sqrt(n));
	while(true){
		range[i]=true;
		int tmp=i*i;
		if(n>=tmp){
			n-=tmp;
			i=floor(sqrt(n));
		}
		if(n<=0) break;
	}
	for(i=1;i<=50000;i++){
		if(range[i]) cnt++;
	}


	cout<<cnt<<endl;

	return 0;
}
