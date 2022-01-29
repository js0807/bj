#include <iostream>
#include <string>
#include <algorithm>

#define MAX 10000

using namespace std;

int a[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i,head=0,tail=0,size=0;
	cin>>n;
	for(i=0;i<n;i++){
		string s;
		cin>>s;
		if(s[0]=='p' && s[1]=='u'){
			int c;
			cin>>c;
			if(tail==MAX) tail=1;
			a[tail++]=c;
			size++;
		}
		if(s=="pop"){
			if(size==0) cout<<"-1\n";
			else{
				if(head==MAX) head=1;
				cout<<a[head]<<"\n";
				head++;
				size--;
			}
		}
		if(s=="front"){
			if(size==0) cout<<"-1\n";
			else cout<<a[head]<<"\n";
		}
		if(s=="back"){
			if(size==0) cout<<"-1\n";
			else cout<<a[tail-1]<<"\n";
		}
		if(s=="size"){
			cout<<size<<"\n";
		}
		if(s=="empty"){
			if(size==0) cout<<"1\n";
			else cout<<"0\n";
		}
	}
	return 0;
}
