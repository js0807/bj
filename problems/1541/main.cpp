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
	int sum=0,flag=0;
	string s,n="";
	vector<int> num;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='+' || s[i]=='-'){
			if(flag==0) num.push_back(stoi(n));
			else num.push_back(-stoi(n));
			n="";
			if(s[i]=='-') flag=1;
			//if(flag>1) flag=0;
		} else{
			n+=s[i];
		}
	}

	if(flag==0) num.push_back(stoi(n));
	else num.push_back(-stoi(n));
	
	for(auto k:num) sum+=k;
	cout<<sum<<endl;
	
	return 0;
}
