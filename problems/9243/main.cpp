#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,flag=1;
	string b,d;
	cin>>n>>b>>d;
	for(int i=0;i<b.size();i++){
		if(n%2==0){
			if(b[i]!=d[i]) flag=0;
		} else{
			if(b[i]==d[i]) flag=0;
		}
	}
	if(flag) cout<<"Deletion succeeded\n";
	else cout<<"Deletion failed\n";
	return 0;
}
