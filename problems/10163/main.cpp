#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 1001

using namespace std;

int graph[MAX][MAX],n;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void paint(int si, int sj, int ci, int cj, int num){
	for(int i=si;i<si+ci;i++){
		for(int j=sj;j<sj+cj;j++){
			graph[i][j]=num;
		}
	}
}

int main(){
	init();
	cin>>n;
	int a[n][4];
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
		paint(a[i][0],a[i][1],a[i][2],a[i][3],i+1);
	}
	for(int t=0;t<n;t++){
		int cnt=0;
		for(int i=a[t][0];i<a[t][0]+a[t][2];i++){
			for(int j=a[t][1];j<a[t][1]+a[t][3];j++){
				if(graph[i][j]==t+1) cnt++;
			}
		}
		cout<<cnt<<'\n';
	}

	return 0;
}
