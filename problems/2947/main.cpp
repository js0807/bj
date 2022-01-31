#include <iostream>
#include <string>
#include <algorithm>

#define NUM 5

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void p(int *a){
	int i;
	for(i=0;i<NUM;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	init();

	int a[NUM];
	int i,j,k;
	
	for(i=0;i<NUM;i++){
		cin>>a[i];
	}
	
	for(i=0;i<NUM;i++){
		for(j=0;j<NUM-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				p(a);
			}
		}
	}
	
	return 0;
}
