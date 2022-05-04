#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int bfs(int start,int end){
	queue<pair<long long,int>> q;
	q.push({start,0});
	while(!q.empty()){
		long long x=q.front().first;
		int t=q.front().second;
		q.pop();
		if(x==end) return t;
		if(x>end) continue;
		else{
			q.push({x*2,t+1});
			q.push({x*10+1,t+1});
		}
	}
	return 0;
}

int main(){
	init();
	int a,b,t;
	cin>>a>>b;
	t=bfs(a,b);
	if(t==0) t-=1;
	else t+=1;
	cout<<t<<endl;
	return 0;
}
