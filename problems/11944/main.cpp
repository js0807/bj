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
	string n;
	int nn,m;
	cin>>n>>m;
	nn=stoi(n);
	if(nn<=m) m=nn; 
	int cnt=0,i=0;
	int size=n.size();
	while(cnt<m){
		cout<<n[i++];
		cnt++;
		if(cnt%size==0) i=0;
	}
	cout<<endl;
	return 0;
}
