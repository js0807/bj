#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int n,r,c,cnt=0;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dq(int x,int y,int size){
	for(int i=x;i<x+size;i++){
		for(int j=y;j<y+size;j++){
			if(i==r and j==c){
				cout<<cnt<<endl;
				return;
			}
			if(size>2){
				if(i<r and j<c){
					int r=size/2;
					dq(x,y,r);
					dq(x,y+r,r);
					dq(x+r,y,r);
					dq(x+r,y+r,r);
					return;
				}
			}
			cnt++;
		}
	}
}

int main(){
	init();
	cin>>n>>r>>c;
	dq(0,0,pow(2,n));
	return 0;
}
