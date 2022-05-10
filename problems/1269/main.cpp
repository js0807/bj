#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int an,bn;
	set<int> a,b;
	cin>>an>>bn;
	for(int i=0;i<an;i++){
		int n; cin>>n;
		a.insert(n);
	}
	for(int i=0;i<bn;i++){
		int n; cin>>n;
		b.insert(n);
	}
	int acnt=0;
	for(auto k:a){
		if(b.find(k)!=b.end()) acnt++;
	}
	an-=acnt;
	int bcnt=0;
	for(auto k:b){
		if(a.find(k)!=a.end()) bcnt++;
	}
	bn-=bcnt;
	cout<<an+bn<<endl;
	return 0;
}
