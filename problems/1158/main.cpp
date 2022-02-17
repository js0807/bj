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

int main(){
	init();
	int n,k;
	cin>>n>>k;
	queue<int> q;
	queue<int> ans;
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	int cnt=1;
	while(true){
		int m=q.front();
		q.pop();
		if(cnt%k!=0) q.push(m);
		else ans.push(m);
		cnt++;
		if(q.size()==0) break;
	}
	
	cout<<'<';
	while(ans.size()!=0){
		if(ans.size()==1) cout<<ans.front()<<">\n";
		else cout<<ans.front()<<", ";
		ans.pop();
	}
	
	return 0;
}
