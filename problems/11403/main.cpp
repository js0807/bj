#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define MAX 100

using namespace std;

int n,graph[MAX+1][MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void show(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<graph[i][j]<<' ';
		}
		cout<<'\n';
	}
	cout<<"====================\n";
}

int main(){
	init();
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>graph[i][j];
		}
	}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(graph[i][k] and graph[k][j]) graph[i][j]=1;
				//cout<<i<<' '<<j<<' '<<k<<'\n';
				//show();
			}
		}
	}
	show();
	return 0;
}
