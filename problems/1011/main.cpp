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
	int t,cnt=0;
	int di[3]={0,1,2};
	cin>>t;
	for(int i=0;i<t;i++){
		int x,y,d;
		cin>>x>>y;
		d=y-x-2;
		// idea : 1 [2 3 4 3 2] 1
		// at this time, input : 0 16 -> 7 (1+5+1)
		// so, we can use middle value
		//  => count*2 or count*2+1 (even/odd)
		// except first and last.
	}
	
	return 0;
}
