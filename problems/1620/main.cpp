#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,m;
	map<int,string> dogami;
	map<string,int> dogams;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		dogami.insert({i,s});
		dogams.insert({s,i});
	}

	for(int i=1;i<=m;i++){
		int flag=0;
		string s;
		cin>>s;
		
		for(auto c:s){
			if(isdigit(c)==0){
				flag=1;
				break;
			}
		}
		
		if(flag){
			// string
			auto ans = dogams.find(s);
			cout<<ans->second<<'\n';
		}
		else{
			//num
			auto ans = dogami.find(stoi(s));
			cout<<ans->second<<'\n';
		}
			
	}

	return 0;
}
