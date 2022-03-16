#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 128

using namespace std;

int graph[MAX][MAX];
int n,before,b=0,w=0;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dq(int si,int ei,int sj,int ej){
	int r=n-1;
	if(si>r or ei>r or sj>r or ej>r) return;
	if(si>ei) swap(si,ei);
	if(sj>ej) swap(sj,ej);
	cout<<si<<ei<<sj<<ej<<'\n';
	int start=graph[si][sj];
	for(int i=si;i<ei;i++){
		for(int j=sj;j<ej;j++){
			if(graph[i][j]!=start){
				dq(si,ei/2,sj,ej/2); // 0 3 0 3
				dq(si,ei/2,sj+ej/2+1,ej); // 0 3 4 7
				dq(si+ei/2+1,ei,sj,ej/2); // 4 7 0 3
				dq(si+ei/2+1,ei,sj+ej/2+1,ej); // 4 7 4 7
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
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>graph[i][j];
		}
	}
	dq(0,n-1,0,n-1);
	cout<<w<<endl;
	cout<<b<<endl;
	return 0;
}
