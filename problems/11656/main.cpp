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
	string s;
	cin>>s;
	vector<string> v;
	for(int i=0;i<s.size();i++){
		string tmp;
		for(int j=i;j<s.size();j++){
			tmp+=s[j];
		}
		v.push_back(tmp);
	}

	sort(v.begin(),v.end());

	for(int i=0;i<s.size();i++){
		cout<<v[i]<<endl;
	}
	
	return 0;
}
