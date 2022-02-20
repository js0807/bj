#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i,j;
	cin>>n;
	int road[n-1],cost[n];
	int oil=0,len=0,min=1000000001,co=0,mindex=0;
	for(i=0;i<n-1;i++){
		cin>>road[i];
		len+=road[i];
	}
	for(i=0;i<n;i++){
		cin>>cost[i];
		if(cost[i]<min){
			min=cost[i];
			mindex=i;
		}
	}


	
	return 0;
}
