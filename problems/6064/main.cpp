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

int main(){
	init();
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int m,n,x,y,a=1,b=1,cnt=1,end;
		cin>>m>>n>>x>>y;
		end=m*n/__gcd(m,n);
		while(cnt<=end){
			if(a==x and b==y) break;
			a++; b++; cnt++;
			if(a>m) a-=m;
			if(b>n) b-=n;
		}
		if(cnt>end) cout<<"-1\n";
		else cout<<cnt<<'\n';
	}
	return 0;
}
