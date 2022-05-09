#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

/*
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
*/

/*
void dq(int x,int y,int size,int n){
	if(size==0) return;
	int re=size/2,mul=pow(2,n-2);
	if(size==1) mul=1;
	if(x>=re){
		if(y>=re){
			x=re; y=re;
			cnt+=size*mul*3;
		} else{
			x=re; y=re/2;
			cnt+=size*mul*2;
		}
	} else{
		if(y>=re){
			x=re/2; y=re;
			cnt+=size*mul;
		} else{
			x=re/2; y=re/2;
		}
	}
	if(x==r and y==c) return;
	dq(x,y,re,n-1);
}
*/

int n,r,c,nx,ny;
double cnt;

void dq(int size,int num){
	if(size==1) return;
	double mul=pow(2,num-2);
	if(r>=size/2){
		if(c>=size/2){
			nx+=size/2; ny+=size/2;
			cnt+=size*mul*3;
		} else{
			nx+=size/2;
			cnt+=size*mul*2;
		}
	} else{
		if(c>=size/2){
			ny+=size/2;
			cnt+=size*mul;
		}
	}
	if(r==nx and c==ny) return;
	dq(size/2,num-1);
}

int main(){
	init();
	cin>>n>>r>>c;
	dq(pow(2,n),n);
	cout<<(int)cnt<<endl;
	return 0;
}
