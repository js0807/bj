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
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b,max=0;
		cin>>a>>b;
		if(a>b) swap(a,b);
		for(int j=1;j<=b;j++){
			if(a%j==0 and b%j==0){
				if(j>max) max=j;
			}
		}
		int min=a*b/max;
		cout<<min<<" "<<max<<endl;
	}

	return 0;
}
