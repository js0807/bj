#include <iostream>
#include <string>
#include <algorithm>

#define MAX 1000

using namespace std;

int a[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,k,i,cnt=0;
	cin>>n>>k;
	i=k;
	cout<<"<";
	while(true){
		if(cnt==n-1) cout<<i;
		else cout<<i<<", ";
		a[i]++;
		cnt++;
		if(cnt==n) break;
		int count=0;
		while(count<k){
			i++;
			if(i>=n+1) i-=n;
			if(a[i]==0) count++;
		}
	}
	cout<<">"<<endl;

	return 0;
}
