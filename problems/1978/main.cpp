#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int n,i,j,cnt,rcnt=0;
	cin>>n;
	int *a = new int[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cnt=0;
		for(j=1;j<=a[i];j++){
			if(a[i]%j==0) cnt++;
		}
		if(cnt==2) rcnt++;
	}
	cout<<rcnt<<endl;
	return 0;
}
