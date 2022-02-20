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
	int min1=2001,min2=2001;
	for(int i=0;i<3;i++){
		int price;
		cin>>price;
		if(price<min1) min1=price;
	}
	for(int i=0;i<2;i++){
		int price;
		cin>>price;
		if(price<min2) min2=price;
	}

	cout<<min1+min2-50<<endl;

	return 0;
}
