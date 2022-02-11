#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int a[500][500];

int main(){
	init();
	int n,m,b,i,j;
	int cost=2100000000,height=0,mini=257,maxi=0;
	cin>>n>>m>>b;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
			if(a[i][j]<mini) mini=a[i][j];
			if(a[i][j]>maxi) maxi=a[i][j];
		}
	}
	for(i=mini;i<=maxi;i++){
		int icost=0;
		int bag=b;
		for(j=0;j<n;j++){
			for(int k=0;k<m;k++){
				int h=a[j][k];
				int d;
				if(h<i){
					d=i-h;
					bag-=d; icost+=d;
				}
				if(h>i){
					d=h-i;
					bag+=d; icost+=2*d;
				}
			}
		}
		if(icost<=cost and bag>=0){
			cost=icost;
			if(i>=height) height=i; 
		}
	}

	cout<<cost<<' '<<height<<endl;

	return 0;
}
