#include <iostream>
#include <string>
#include <algorithm>

#define MAX 10

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int d=0,u=0,max=0;
	int *sum = new int[MAX];
	for(int i=0;i<MAX;i++){
		int a,b;
		cin>>a>>b;
		sum[i]=b-a;
	}

	int s=sum[0];
	for(int i=1;i<MAX;i++){
		s+=sum[i];
		if(s>max) max=s;
	}

	cout<<max<<endl;
	
	return 0;
}
