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
int mini=257,maxi=0;

void one(){
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(arr[i][j]>maxi) maxi=arr[i][j];	
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(arr[i][j]==maxi){
				arr[i][j]--;
				b++;
				cost+=2;
			}
		}
	}
}

void two(){
	if(b==0) return;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(arr[i][j]<mini) mini=arr[i][j];	
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(arr[i][j]==mini){
				arr[i][j]++;
				b--;
				cost++;
			}
		}
	}
}

int main(){
	init();
	cin>>n>>m>>b;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>arr[i][j];
			if(arr[i][j]<mini) mini=arr[i][j];
			if(arr[i][j]>maxi) maxi=arr[i][j];
		}
	}
	
	i=mini;
	while(i<maxi){
		if(b>0){
			two();
		} else one();
	}

	cout<<cost<<' '<<arr[0][0]<<endl;

	return 0;
}
