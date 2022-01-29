#include <iostream>
#include <string>
#include <algorithm>

#define MAX 1000

using namespace std;

int a[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i;
	cin>>n;

	for(i=1;i<=n;i++){
		string s=to_string(i);
		if(s.size()<=2){
			a[i]++;
		} else{
			if((s[0]-s[1])==(s[1]-s[2])) a[i]++;
		}
	}

	int cnt=0;
	for(i=1;i<=n;i++){
		if(a[i]>0) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
