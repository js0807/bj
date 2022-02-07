#include <iostream>
#include <string>
#include <algorithm>

#define MAX 500

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int arr[MAX][MAX];
int i,j,n,m,b,cost;

void one(){
	
	b++;
	cost+=2;
}

void two(){
	
	b--;
	cost+=1;
}

int main(){
	init();
	int d=0,min=257,max=0,sum=0;
	cin>>n>>m>>b;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>arr[i][j];
			if(arr[i][j]>max) max=arr[i][j];
			if(arr[i][j]<min) min=arr[i][j];
			sum+=arr[i][j];
		}
	}

	sum/=n*m;
	if((max-sum)>(sum-min)) d=1;

	while(true){
		if(d){
			
		} else{

		}
	}
	
	return 0;
}
