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
	int n,kk;
	cin>>n>>kk;
	vector<int> v[n];
	for(int i=0;i<n;i++){
		int tmp; cin>>tmp;
		for(int j=0;j<3;j++){
			int score; cin>>score;
			v[i].push_back(score);
		}
		v[i].push_back(tmp);
	}
	sort(v,v+n,greater<vector<int>>());
	int rank=0;
	int before[3]={1000001,1000001,1000001};
	for(int i=0;i<n;i++){	
		for(int j=0;j<3;j++){
			if(v[i][j]<before[j]){
				rank++;
				break;
			}
		}
		v[i].push_back(rank);
		for(int j=0;j<3;j++){
			before[j]=v[i][j];
		}
	}
	
	for(auto k:v){
		if(k[3]==kk) cout<<k[4]<<endl;
	}

	return 0;
}
