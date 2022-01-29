#include <iostream>

#define MAX 1000000

using namespace std;

int b[MAX];

void merge(int a[],int s,int m,int e){
	int i=s;
	int j=m+1;
	int k=s;
	int l;

	while(i<=m && j<=e){
		if(a[i]<=a[j]) b[k++]=a[i++];
		else b[k++]=a[j++];
	}
	if(i>m){
		for(l=j;l<=e;l++){
			b[k++]=a[l];
		}
	} else{
		for(l=i;l<=m;l++){
			b[k++]=a[l];
		}
	}
	for(l=s;l<=e;l++){
		a[l]=b[l];
	}
}

void merge_sort(int a[], int s, int e){
	if(s>=e){
		return;
	} else{
		int m=(s+e)/2;
		merge_sort(a,s,m);
		merge_sort(a,m+1,e);
		merge(a,s,m,e);
	}
}


int main(){
	int n,i;
	cin>>n;
	int *a = new int[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}

	merge_sort(a,0,n-1);

	for(i=0;i<n;i++){
		cout<<a[i]<<endl;
	}

	return 0;
}
