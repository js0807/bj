#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 1000000

using namespace std;

bool visited[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,m;
	string p,s;
	cin>>n>>m;
	for(int i=1;i<=2*n+1;i++){
		if(i%2==1) p.push_back('I');
		else p.push_back('O');
	}
	cin>>s;
	for(int i=0;i<2*n+1;i++){
		if(!visited[i]){
			visited[i]=true;
			if(p[0]==s[i]){
				for(auto k:p){
					
				}
			}
		}
	}
	return 0;
}
