#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100

using namespace std;

int g2[MAX+1][MAX+1];
int g1[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		g2[a][b]=1; g2[b][a]=1;
		g1[a][b]=1; g1[b][a]=1;
	}
	
	// if you use INT32_MAX and use basic operators,
	// be careful of integer overflow!!!!!
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j) continue;
			if(g2[i][j]==0){
				g2[i][j]=5001;
				g1[i][j]=5001;
			}
		}
	}

	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(k%2==0) g1[i][j]=min(g2[i][j],g2[i][k]+g2[k][j]);
				else g2[i][j]=min(g1[i][j],g1[i][k]+g1[k][j]);
			}
		}
	}
	
	bool flag=true;
	int min=INT32_MAX,ans;
	if(n%2==0) flag=false;
	if(flag){
		for(int i=1;i<=n;i++){
			int sum=0;
			for(int j=1;j<=n;j++){
				sum+=g2[i][j];
			}
			if(sum<min){
				min=sum;
				ans=i;
			}
		}
	} else{
		for(int i=1;i<=n;i++){
			int sum=0;
			for(int j=1;j<=n;j++){
				sum+=g1[i][j];
			}
			if(sum<min){
				min=sum;
				ans=i;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
