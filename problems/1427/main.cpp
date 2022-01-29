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
	string n;
	cin>>n;
	sort(n.begin(),n.end(),greater<char>());
	cout<<n<<endl;
	return 0;
}
