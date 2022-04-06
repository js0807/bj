#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n,s=0;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void heapify(int *arr,int i){
	int maxi=i;
	int left=i*2;
	int right=i*2+1;

	if(left<=s and arr[i]>arr[left]) maxi=left;
	if(right<=s and arr[maxi]>arr[right]) maxi=right;
	
	if(maxi!=i){
		swap(arr[i],arr[maxi]);
		heapify(arr,maxi);
	}
}

int extract(int *arr){
	if(s==0) return 0;
	int maxi=arr[1];
	arr[1]=arr[s];
	s--;
	heapify(arr,1);
	return maxi;
}

void decrease(int *arr,int i,int val){
	if(arr[i]<val) return;
	arr[i]=val;
	while(i>1 and arr[i/2]>arr[i]){
		swap(arr[i/2],arr[i]);
		i/=2;
	}
}

void insert(int *arr,int val){
	if(s>n) return;
	
	s++;
	arr[s]=INT32_MAX;

	decrease(arr,s,val);
}

void delete_index(int *arr,int i){
	decrease(arr,i,INT32_MIN);
	extract(arr);
}

int main(){
	init();
	cin>>n;
	int *arr = new int[n+1];
	fill_n(arr,n+1,0);
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a==0) cout<<extract(arr)<<'\n';
		else insert(arr,a);
	}
	return 0;
}
