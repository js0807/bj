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
	int rsum,ans;
	string s1,s2,sum;

	cin>>s1>>s2;
	
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	
	rsum=stoi(s1)+stoi(s2);
	sum=to_string(rsum);

	reverse(sum.begin(),sum.end());
	
	ans=stoi(sum);
	
	cout<<to_string(ans)<<endl;

	return 0;
}
