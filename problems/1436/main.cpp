#include <iostream>
#include <string>

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

	string s="666";
	int cnt=1,a=stoi(s);
	while(cnt!=n){
		a++;
		if(to_string(a).find(s)!=string::npos){
			cnt++;
		}
	}

	cout<<a<<endl;
		

	return 0;
}
