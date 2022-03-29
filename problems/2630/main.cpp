#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 128

using namespace std;

int graph[MAX+1][MAX+1];
int n,before,b=0,w=0;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dq(int si,int ei,int sj,int ej){ 
	int start=graph[si][sj];
	for(int i=si;i<=ei;i++){
		for(int j=sj;j<=ej;j++){
			if(graph[i][j]!=start){
				dq(si,ei/2,sj,ej/2); // 1 4 1 4 
				dq(si,ei/2,ej/2+1,ej); // 1 4 5 8
				dq(ei/2+1,ei,sj,ej/2); // 5 8 1 4
				dq(ei/2+1,ei,ej/2+1,ej); // 5 8 5 8
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
	dq(1,n,1,n);
	cout<<w<<endl;
	cout<<b<<endl;
	return 0;
}
