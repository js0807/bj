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

void one(int *b, int *cost){
	if(*b>0){

	} else{

	}
	*cost+=2;
}

void two(int *b, int *cost){
	if(*b>0){
		
	} else{

	}
	*cost+=1;
}

int main(){
	init();
	int n,m,b,cost=0;
	cin>>n>>m>>b;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}


	
	return 0;
}
