#include <iostream>
#include <string>
#include <algorithm>

#define MAX 10000

using namespace std;

int a[MAX]={0,};

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i=0,index=0,size=0;
	cin>>n;
	while(i<n){
		string s;
		cin>>s;
		if(s[0]=='p' && s[1]=='u'){
			int num;
			cin>>num;
			a[index++]=num;
		}
		if(s=="pop"){
			if(a[index-1]==0) cout<<-1<<"\n";
			else{
				cout<<a[index-1]<<"\n";
				a[index-1]=0;
				index--;
			}
		}
		if(s=="size"){
			cout<<index<<"\n";
		}
		if(s=="top"){
			if(a[index-1]==0) cout<<-1<<"\n";
			else cout<<a[index-1]<<"\n";
		}
		if(s=="empty"){
			if(a[0]==0) cout<<1<<"\n";
			else cout<<0<<"\n";
		}
		i++;	
	}

	return 0;
}
