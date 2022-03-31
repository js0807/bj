#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 2187

using namespace std;

int graph[MAX+1][MAX+1];
int o=0,z=0,m=0;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dq(int x, int y, int size){
	int start=graph[x][y];
	for(int i=x;i<=x+size-1;i++){
		for(int j=y;j<=y+size-1;j++){
			if(graph[i][j]!=start){
				int r=size/3;
				dq(x,y,r);
				dq(x,y+r,r);
				dq(x,y+r*2,r);
				dq(x+r,y,r);
				dq(x+r,y+r,r);
				dq(x+r,y+r*2,r);
				dq(x+r*2,y,r);
				dq(x+r*2,y+r,r);
				dq(x+r*2,y+r*2,r);
				return;
			}
		}
	}
	if(start==1) o++;
	if(start==0) z++;
	if(start==-1) m++;
}

int main(){
	init();
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>graph[i][j];
		}
	}
	dq(1,1,n);
	cout<<m<<'\n'<<z<<'\n'<<o<<endl;
	return 0;
}
