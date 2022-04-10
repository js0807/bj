#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int combination(int n,int r){
	if(n==r or r==0) return 1;
	else return combination(n-1, r-1)+combination(n-1, r);
}

int main(){
	init();
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,cnt=1;
		map<string,int> m;
		cin>>n;
		for(int j=0;j<n;j++){
			string a,c;
			cin>>a>>c;
			m.insert({c,0});
			for(auto k:m){
				if(c==k.first) m[k.first]++;
			}
		}
		for(auto k:m){
			cnt*=(k.second+1);
		}
		if(m.size()==1) cnt=n+1;
		cout<<cnt-1<<'\n';
	}
	return 0;
}
