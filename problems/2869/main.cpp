#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	long long a,b,v,d;
	cin>>a>>b>>v;
	d=(v-b-1)/(a-b)+1;
	cout<<d<<endl;
	return 0;
}
