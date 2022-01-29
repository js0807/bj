#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i,j;
	stack<int> s;
	
	cin>>n;
	int *a = new int[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}

	int before=0,curr,d;
	for(i=0;i<n;i++){
		curr = a[i];
		d=curr-before;
		
		if(d<0){
			for(j=0;j<-d;j++) cout<<"-\n";
		} else{
			for(j=0;j<d;j++) cout<<"+\n";
			cout<<"-\n";
		}

		before=a[i];
	}

	return 0;
}
