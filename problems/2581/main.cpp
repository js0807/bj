#include <iostream>
#include <string>
#include <algorithm>

#define MAX 10000

int a[MAX]={0,};

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void sosu(){
	int cnt=0;
	for(int i=2;i<MAX;i++){
		for(int j=2;j<=i;j++){
			if(i%j==0) cnt++;
		}
		if(cnt==1) a[i-1]++;
		cnt=0;
	}
}

int main(){
	init();
	sosu();
	int m,n,i,sum=0,min=10001;
	cin>>m>>n;
	for(i=m-1;i<n;i++){
		if(a[i]>0){
			sum+=i+1;
			if(i+1<min) min=i+1;
		}
	}
	if(sum>0){
		cout<<sum<<"\n";
		cout<<min<<"\n";
	} else cout<<-1<<"\n";
	return 0;
}
