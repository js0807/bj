#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100000

using namespace std;

int n;
vector<int> graph[MAX+1];
bool visited[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	cin>>n;
	for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
	}

	return 0;
}
