#include <iostream>
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
	int n,m,i,max=0;
	cin>>n>>m;
	vector<int> v;
	for(i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
		if(v[i]>max) max=v[i]; 
	}
	
	while(true){
		int sum=0;
		for(i=0;i<n;i++){
			if(v[i]<=max) continue;
			sum+=v[i]-max;
		}
		if(sum==m) break;
		max--;
	}
	
	cout<<max<<endl;

	return 0;
}
