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
	string s;
	string d[8]={"c=","c-","dz=","d-","lj","nj","s=","z="};
	cin>>s;
	int i=0;
	while(i<8){
		int pos=s.find(d[i]);
		if(pos>=0){
			s.replace(pos,d[i].size(),'!');
		} else i++;
	}
	cout<<s.size()<<endl;
	return 0;

