#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 8

using namespace std;

int n,m;
vector<int> v;
vector<int> arr;
bool visited[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void backtrack(int cnt){
	if(cnt==m){
		for(auto k:v) cout<<k<<' ';
		cout<<'\n';
		return;
	}
	// foreach X -> visited range 1~8 , input range 10000, so it cant run.
	// but we can use foreach . but i dont know reason why. obviously visited[MAX+1].
	for(int i=1;i<=n;i++){ 
		if(visited[i]) continue;
		visited[i]=true;
		v.push_back(arr[i-1]);
		backtrack(cnt+1);
		v.pop_back();
		visited[i]=false;
	}
}

int main(){
	init();
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		arr.push_back(num);
	}
	sort(arr.begin(),arr.end());
	backtrack(0);

	return 0;
}
