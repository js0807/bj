#include <iostream>
#include <vector>

#define MAX 1000

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,m,sum=0;
	vector<int> v;
	cin>>n>>m;
	
	for(int i=1;i<=MAX;i++){
		for(int j=1;j<=i;j++){
			v.push_back(i);
		}
	}
	
	for(int i=n;i<=m;i++){
		sum+=v[i-1];
	}

	cout<<sum<<endl;

	return 0;
}
