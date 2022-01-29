#include <iostream>

#define MAX 1000000

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

long long a[MAX];
int n,m;

bool test(long long mid){
	long long sum=0;
	for(int i=0;i<n;i++){
		long long d=a[i]-mid;
		if(d>0) sum+=d;
	}
	if(sum<m) return false;
	else return true;
}

void f(long long low,long long high){
	if(low>=high){
		cout<<low<<endl;
		return;
	} else{
		long long mid=(low+high)/2+1;
		bool result=test(mid);

		if(result) f(mid,high);
		else f(low,mid-1);
	}

}

int main(){
	init();
	cin>>n>>m;
	long long low=0,high=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>high) high=a[i];
	}

	f(low,high);

	return 0;
}
