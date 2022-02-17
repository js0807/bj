#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,tmp,cnt=0;
		vector<int> v;
		cin>>a;
		tmp=a;
		while(tmp!=0){
			if(tmp%2==1) v.push_back(1);
			else v.push_back(0);
			cnt++;
			tmp/=2;
		}
		for(int j=0;j<cnt;j++){
			if(v[j]>0) cout<<j<<' ';
		}
		cout<<'\n';
	}
	return 0;
}
