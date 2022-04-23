#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 100000

using namespace std;

int n,k,t;
vector<int> v(2*MAX+1);

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void bfs(){
	queue<int> q;
	q.push(n);
	v[n]=1;
	while(!q.empty()){
		int tmp=q.front();
		if(tmp==k){
			t=v[tmp]-1;
			break;
		}
		q.pop();
		if(tmp>MAX) continue;
		if(!v[tmp-1]){
			q.push(tmp-1);
			v[tmp-1]+=v[tmp]+1;
		}
		if(!v[tmp+1]){
			q.push(tmp+1);
			v[tmp+1]+=v[tmp]+1;
		}
		if(!v[tmp*2]){
			q.push(tmp*2);
			v[tmp*2]+=v[tmp]+1;
		}
	}
}

int main(){
	init();
	cin>>n>>k;
	bfs();
	//int maxi=(n>k) ? n:k,cnt=0;
	cout<<t<<endl;
	return 0;
}
