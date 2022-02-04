#include <iostream>

#define MAX 10000

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int ca[MAX+1];

int main(){
	init();
	int n,num,max=0;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>num;
		ca[num]++;
		if(num>max) max=num;
	}
	
	int i=1;
	while(i<=max){
		if(ca[i]<=0){
			i++;
			continue;
		}
		cout<<i<<"\n";
		ca[i]--;
	}

	return 0;
}
