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
	int n,i,j,tmp,min=10001,sum=0;
	cin>>n;

	vector<int> a,b;
	for(i=0;i<n;i++){
		cin>>tmp;
		a.push_back(tmp);
	}
	for(i=0;i<n;i++){
		cin>>tmp;
		b.push_back(tmp);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	for(i=0;i<n;i++){
		sum+=a[i]*b[n-i-1];
	}
	
	/*
	for(i=0;i<n;i++){
		int sum=0;
		for(j=0;j<n;j++){
			int k=i+j;
			if(k>=n) k-=n;
			sum+=a[j]*b[k];
		}
		if(sum<min) min=sum;
	}
	*/

	cout<<sum<<endl;

	return 0;
}
