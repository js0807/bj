#include <iostream>

#define MAX 10000

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int ca[MAX+1];
int cab[MAX+1];

void cSort(int max, int n){
	int *sorted = new int[n+1];

	for(int i=1;i<max;i++){
		ca[i+1]+=ca[i];
	}  
	
	int i=1;
	while(i<=n){
		if(cab[i]<=0) i++;
		sorted[ca[i]--]=i;
		cab[i]--;
		if(cab[i]<=0) i++;
	}

	for(int i=1;i<=n;i++){
		cout<<sorted[i]<<endl;
	}
}

int main(){
	init();
	int n,max=0,num;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		ca[num]++;
		cab[num]++;
		if(num>max) max=num;
	}
	
	cSort(max,n);

	return 0;
}
