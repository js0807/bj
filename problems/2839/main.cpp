#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int n,cnt,min=5000;
	cin>>n;
	int i,j,len=n/3;
	for(i=0;i<=len;i++){
		for(j=0;j<=len;j++){
			if((j*3+i*5)==n){
				cnt=i+j;
				if(cnt<min) min=cnt;
			}		
		}
	}
	if(min==5000) cout<<"-1"<<endl;
	else cout<<min<<endl;
	return 0;
}
