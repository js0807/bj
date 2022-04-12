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

int main(){
	init();
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int p,maxi=0;
		cin>>p;
		map<int,string> m;
		for(int j=0;j<p;j++){
			int cost;
			string name;
			cin>>cost>>name;
			if(cost>=maxi) maxi=cost;
			m.insert({cost,name});
		}
		cout<<m[maxi]<<'\n';
	}

	return 0;
}
