#include <iostream>
#include <string>
#include <algorithm>
#include <list>

using namespace std;

int main(){
	int n,m;
	int i,j,k;
	cin>>n>>m;
	int *a = new int[n];
	list<int> b;
	list<int>::iterator it;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	int d;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<n;k++){
				d=m-(a[i]+a[j]+a[k]);
				if((a[i]+a[j]+a[k])<=m){
					b.push_back(d);			
				}
			}
		}
	}
	/*
	for(it=b.begin();it!=b.end();it++){
		cout<<*it<<endl;
	}
	*/
	b.sort();
	cout<<m-b.front()<<endl;

	return 0;
}
