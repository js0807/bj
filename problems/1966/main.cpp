#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>

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
		int n,m,cnt=0,flag=0;
		cin>>n>>m;
		queue<pair<int,int>> q;
		int *r = new int[n];

		for(int j=0;j<n;j++){
			int imp;
			cin>>imp;
			if(j!=m) q.push(make_pair(imp,0));
			else q.push(make_pair(imp,1));
			r[j]=imp;
		}

		sort(r,r+n);
		
		int rs = n-1;
		while(true){
			int kf = q.front().first;
			int ks = q.front().second;
			q.pop();
			if(kf<r[rs]){
				q.push(make_pair(kf,ks));
			} else{
				rs--;
				cnt++;
				if(ks==1) break;
			}
		}

		cout<<cnt<<endl;
	}

	return 0;
}
