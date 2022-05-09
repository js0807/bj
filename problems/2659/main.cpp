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
	int n[4],cn=0,mini=10000;
	for(int i=0;i<4;i++){
		cin>>n[i];
	}
	for(int i=0;i<4;i++){
		int jari=1000;
		for(int j=0;j<4;j++){
			int index=i+j;
			if(index>3) index-=4;
			cn+=n[index]*jari;
			jari/=10;
		}
		if(cn<mini) mini=cn;
		cn=0;
	}
	return 0;
}
