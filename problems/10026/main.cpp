#include <iostream>
#include <string>
#include <algorithm>

#define MAX 100

using namespace std;

int n;
char graph[MAX+1][MAX+1];
char backup[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void show(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<graph[i][j];
		}
		cout<<'\n';
	}
	cout<<"=========================\n";
}

bool dfs(int x, int y, char c){
	if(x<1 or y<1 or x>n or y>n) return false;
	if(graph[x][y]==c){
		graph[x][y]='X';
		int rx[4]={1,-1,0,0};
		int ry[4]={0,0,1,-1};
		for(int i=0;i<4;i++){
			dfs(x+rx[i],y+ry[i],c);
		}
		return true;
	}
	return false;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		for(int j=1;j<=n;j++){
			graph[i][j]=s[j-1];
			backup[i][j]=s[j-1];
		}
	}
	int cnt=0;
	char arr[3]={'R','B','G'};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=0;k<3;k++){
				if(dfs(i,j,arr[k])) cnt++;
			}
		}
	}
	cout<<cnt<<' ';
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			graph[i][j]=backup[i][j];
			if(graph[i][j]=='G') graph[i][j]='R';
		}
	}
	cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=0;k<2;k++){
				if(dfs(i,j,arr[k])) cnt++;
			}
		}
	}
	cout<<cnt<<'\n';
	return 0;
}
