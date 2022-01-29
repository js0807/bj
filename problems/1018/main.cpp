#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,m;
	cin>>n>>m;
	string *s = new string[n];
	int i,j;
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	
	return 0;
}
