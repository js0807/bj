#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

#define MAX 500000

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

bool compare(int a, int b){
	if(a<0 && b<0) return a<b;
	else return a>b;
}

int main(){
	init();
	int n,i;
	cin>>n;
	int *a = new int[n];
	
	int min=4001,max=-4001;
	double avg;
	for(i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n);

	for(i=0;i<n;i++){
		if(a[i]<min) min=a[i];
		if(a[i]>max) max=a[i];
		
		avg+=a[i];
	}
	
	int mid=a[n/2];
	int range=max-min;
	
	sort(a,a+n,compare);
	int most,freq,cnt=1;
	for(i=0;i<n;i++){
		freq=1;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]) freq+=1;
			if(freq>=cnt){
				most=a[i];
				cnt=freq;
			}
			if(a[i]!=a[j]) break;
		}
	}

	cout<<floor(avg/n+0.5)<<endl;
	cout<<mid<<endl;
	cout<<most<<endl;
	cout<<range<<endl;

	return 0;
}
