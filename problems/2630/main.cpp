#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 128

using namespace std;

int graph[MAX+1][MAX+1];
int n,b=0,w=0;

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
				int r=size/2;
				dq(x,y,r);
				dq(x+r,y,r);
				dq(x,y+r,r);
				dq(x+r,y+r,r);
				return;
			}
		}
	}
	if(start) b++;
	else w++;
}

int main(){
	init();
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>graph[i][j];
		}
	}
	dq(1,1,n);
	cout<<w<<endl;
	cout<<b<<endl;
	return 0;
}
