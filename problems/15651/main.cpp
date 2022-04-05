#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 8

using namespace std;

int n,m;
vector<int> v;
bool visited[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void backtrack(int cnt){
	if(cnt==m){
		for(auto k:v){
			cout<<k<<' ';
		}
		cout<<'\n';
		return;
	}
	for(int i=1;i<=n;i++){
		visited[i]=true;
		v.push_back(i);
		backtrack(cnt+1);
		v.pop_back();
		visited[i]=false;
	}
}

int main(){
	init();
	cin>>n>>m;
	
	backtrack(0);

	return 0;
}
