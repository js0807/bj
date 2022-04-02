#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 1024

using namespace std;

int arr[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];	
		}
	}
	for(int i=0;i<m;i++){
		int sum=0;
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		for(int j=x1;j<=x2;j++){
			for(int k=y1;k<=y2;k++){
				sum+=arr[j][k];
			}
		}
		cout<<sum<<'\n';
	}

	return 0;
}
