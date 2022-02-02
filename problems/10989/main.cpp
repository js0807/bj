#include <iostream>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void cSort(int *a,int max, int n){
	int *ca = new int[max+1];
	int *sorted = new int[n+1];

	for(int i=0;i<n;i++){
		ca[a[i]]++;
	}

	for(int i=1;i<max;i++){
		ca[i+1]+=ca[i];
	}  

	for(int i=0;i<n;i++){
		sorted[ca[a[i]]--]=a[i];
	}

	for(int i=1;i<=n;i++){
		cout<<sorted[i]<<"\n";
	}
}

int main(){
	init();
	int n,max=0;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>max) max=a[i];
	}
	
	cSort(a,max,n);

	return 0;
}
