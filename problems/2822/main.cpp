#include <iostream>
#include <vector>
#include <algorithm>

#define TOP 5

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n=8;
	vector<pair<int,int>> vii;
	vector<int> r;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		vii.push_back(make_pair(a,i));
	}

	sort(vii.begin(),vii.end());

	int sum=0;
	for(int i=n-1;i>=n-TOP;i--){
		sum+=vii[i].first;
		r.push_back(vii[i].second);
	}

	sort(r.begin(),r.end());

	cout<<sum<<endl;
	for(auto k:r){
		cout<<k<<" ";
	}
	
	cout<<endl;


	return 0;
}
