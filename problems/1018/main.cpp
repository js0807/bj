#include <iostream>
#include <string>
#include <algorithm>

#define MAX 50

using namespace std;

char board[MAX][MAX];
char wb[8][8];
char bb[8][8];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int test(int x, int y, bool flag){
	int cnt=0;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(flag){
				if(board[x+i][y+j]!=wb[i][j]) cnt++;
			} else{
				
				if(board[x+i][y+j]!=bb[i][j]) cnt++;
			}
		}
	}
	return cnt;
}

int result(int n, int m){
	int min=32;
	int x,y;
	bool flag=true; //white start board
	
	for(x=0;x<=n-8;x++){
		for(y=0;y<=m-8;y++){
			int val1 = test(x,y,flag);
			int val2 = test(x,y,!flag);
			if(val1<val2){
				if(val1<min) min=val1;
			} else{
				if(val2<min) min=val2;
			}
		}
	}
	return min;
}

int main(){
	init();
	int n,m,i,j;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>board[i][j];
		}
	}

	// init wb & bb
	char tmp[2]={'W','B'};
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(j%2==i%2) wb[i][j]=tmp[0];
			else wb[i][j]=tmp[1];
		}
	}
	
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(j%2==i%2) bb[i][j]=tmp[1];
			else bb[i][j]=tmp[0];
		}
	}

	cout<<result(n,m)<<endl;
	
	return 0;
}
