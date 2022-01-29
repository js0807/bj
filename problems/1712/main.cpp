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
	int a,b,c;
	cin>>a>>b>>c;
	if(b>=c) cout<<-1<<endl;
	else cout<<a/(c-b)+1<<endl;
	/*else{
		sum-=a;
		while(sum<=0){
			sum+=c-b;
			cnt++;
		}
		cout<<cnt<<endl;
	}*/
	return 0;
}
