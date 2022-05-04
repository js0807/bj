#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector<int> lotto;
bool visited[49];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void backtrack(int x,int *arr){
	if(x==6){
		for(auto k:lotto){
			cout<<k<<' ';
		}
		cout<<'\n';
		return;
	}
	for(int i=0;i<n;i++){
		if(visited[i]) continue;
		lotto.push_back(arr[i]);
		visited[i]=true;
		backtrack(i+1,arr);
		lotto.pop_back();
		visited[i]=false;
	}
}

int main(){
	init();
	while(true){
		cin>>n;
		if(n==0) break;
		int *arr = new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		backtrack(0,arr);
	}
	return 0;
}
