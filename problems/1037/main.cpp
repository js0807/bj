#include <iostream>
#include <vector>

#define MAX 1000000

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i,j;
	cin>>n;

	vector<int> v;
	for(i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	
	int cnt;
	for(i=1;i<=MAX;i++){
		cnt=0;
		for(j=0;j<n;j++){
			if(i%v[j]==0) cnt++;
		}
		if(cnt==n) break;
	}

	cout<<i<<endl;

	return 0;
}
