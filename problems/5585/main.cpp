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
	int n,money[6]={500,100,50,10,5,1},i=0,cnt=0;
	cin>>n;
	n=1000-n;
	while(n>0){
		if(n>=money[i]){
			n-=money[i];
			cnt++;
		}
		else i++;
	}
	cout<<cnt<<endl;
	return 0;
}
