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
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<a+b+c<<'\n';
	return 0;
}
