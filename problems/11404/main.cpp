#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100

using namespace std;

int n,m;
int g[MAX+1][MAX+1];
int bg[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void show(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(g[i][j]>100000*100) g[i][j]=0;
			cout<<g[i][j]<<' ';
		}
		cout<<'\n';
	}
}

void swap_g(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			swap(g[i][j],bg[i][j]);
		}
	}
}

int main(){
	init();
	int maxi=100000*100+1;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int a,b,c; cin>>a>>b>>c;
		if(g[a][b]!=0){
			if(g[a][b]>c){
				g[a][b]=c; bg[a][b]=c;
			}
		} else{
			g[a][b]=c; bg[a][b]=c;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j) continue;
			if(g[i][j]==0){
				g[i][j]=maxi;
				bg[i][j]=maxi;
			}
		}
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				g[i][j]=min(bg[i][j],bg[i][k]+bg[k][j]);
			}
		}
		if(k!=n) swap_g();
	}
	show();
	return 0;
}
