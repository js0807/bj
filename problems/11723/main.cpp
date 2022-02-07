#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n;
	set<int> s;
	set<int> a;
	for(int i=1;i<=20;i++){
		a.insert(i);
	}
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		int num;
		cin>>str;
		if(str=="add"){
			cin>>num;
			s.insert(num);
		}
		if(str=="remove"){
			cin>>num;
			if(s.find(num)!=s.end()) s.erase(s.find(num));
		}
		if(str=="check"){
			cin>>num;
			if(s.find(num)!=s.end()) cout<<"1\n";
			else cout<<"0\n";
		}
		if(str=="toggle"){
			cin>>num;
			if(s.find(num)!=s.end()) s.erase(s.find(num));
			else s.insert(num);
		}
		if(str=="all") s.swap(a);
		if(str=="empty") s.clear();
		
	}

	return 0;
}
