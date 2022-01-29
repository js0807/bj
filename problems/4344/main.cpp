#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int c,i,j;
	cin>>c;
	for(i=0;i<c;i++){
		int n,sum=0;
		cin>>n;
		int *a = new int[n];
		double avg,cnt=0.0;
		for(j=0;j<n;j++){
			cin>>a[j];
			sum+=a[j];
		}
		avg=sum/n;
		for(j=0;j<n;j++){
			if((double)a[j]>avg) cnt++;
		}
		cout<<fixed;
		cout.precision(3);
		cout<<cnt/n*100<<"%\n";
	}
	return 0;
}
