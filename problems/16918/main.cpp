#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int r,c,n;
char graph[201][201];
int boomtime[201][201];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void show(){
	//cout<<"graph\n";
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cout<<graph[i][j];
		}
		cout<<'\n';
	}
	/*
	cout<<"boomtime\n";
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cout<<boomtime[i][j];
		}
		cout<<'\n';
	}
	cout<<"end\n";
	*/
}

void fill(){
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(graph[i][j]=='.'){
				graph[i][j]='O';
				boomtime[i][j]=4;
			}
		}
	}
}

void boomcheck(){
	int rx[4]={-1,1,0,0};
	int ry[4]={0,0,-1,1};
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(boomtime[i][j]!=0) boomtime[i][j]--;
			if(boomtime[i][j]==0){
				graph[i][j]='.';
				boomtime[i][j]=-1;
				for(int k=0;k<4;k++){
					int nx=i+rx[k];
					int ny=j+ry[k];
					if(nx<1 || ny<1 || nx>r || ny>c) continue;
					graph[nx][ny]='.';
					if(boomtime[nx][ny]==1) continue;
					boomtime[nx][ny]=-1;
				}
			}
		}
	}
}

int main(){
	init();
	cin>>r>>c>>n;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			boomtime[i][j]=-1;
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>graph[i][j];
			if(graph[i][j]=='O') boomtime[i][j]=3;
		}
	}
	int t=0;
	while(t<n){
		if(t>0) fill();
		boomcheck();
		t++;
	}
	show();
	return 0;
}
