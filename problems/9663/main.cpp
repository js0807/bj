#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 15

using namespace std;

int n,sum=0;
bool visited[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void paint(int x,int y){
	if(x<1 or y<1 or x>n or y>n) return;
	for(int i=1;i<=n;i++){
		visited[i][y]=true;
		for(int j=1;j<=n;j++){
			visited[x][j]=true;
		}
	}
}

void paint_off(int x, int y){
	if(x<1 or y<1 or x>n or y>n) return;
	for(int i=1;i<=n;i++){
		visited[i][y]=false;
		for(int j=1;j<=n;j++){
			visited[x][j]=false;
		}
	}
}

void backtrack(int cnt){
	if(cnt==n){
		sum+=1;
		return;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(!visited[i][j]){
				paint(i,j);
				backtrack(cnt+1);
				paint_off(i,j);				
			}
		}
	}
}

int main(){
	init();
	cin>>n;
	backtrack(0);
	cout<<sum<<endl;
	return 0;
}
