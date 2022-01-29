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
	int cnt=0,i=0;
	string s;
	cin>>s;
	string d[8]={"c=","c-","dz=","d-","lj","nj","s=","z="};
	while(i<8){
		if(s.find(d[i])){
			s.replace(s.find(d[i]),d[i].length()," ");
			cnt++;
		} else{
			i++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
