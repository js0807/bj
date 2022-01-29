#include <iostream>
#include <queue>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
		int n,m,max=0,cnt=0;
		cin>>n>>m;
		queue<int> q;
		
		for(int j=0;j<n;j++){
			int imp;
			cin>>imp;
			if(imp>max) max=imp;
			q.push(imp);
		}

		while(true){
			int k = q.front();
			q.pop();
			if(k<max){
				q.push(k);
			} else if(k>=max){
				
			}
		}
	}

	

	return 0;
}
