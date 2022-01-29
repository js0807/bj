#include <iostream>
#include <algorithm>

using namespace std;

void quick_sort(int a[], int s, int e){
	if(s>=e) return;
	else{
		int i=s, j=e;
		int p=a[(s+e)/2];
	
		do{
			while(a[i]<p) i++;
			while(a[j]>p) j--;
			if(i<=j){
				swap(a[i],a[j]);
				i++;
				j--;
			}
		} while(i<=j);

		quick_sort(a,s,j);
		quick_sort(a,i,e);
	}
}

int main(){
	int n,i;
	cin>>n;
	int *a = new int[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}

	quick_sort(a,0,n-1);
	
	for(i=0;i<n;i++){
		cout<<a[i]<<endl;
	}

	return 0;
}
