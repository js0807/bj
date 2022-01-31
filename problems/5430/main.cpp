#include <iostream>
#include <string>
#include <algorithm>
#include <deque>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int t,i,j=0;
	cin>>t;
	for(i=0;i<t;i++){
		int n;
		string cmd,arr,ans="[",num;
		deque<int> d;

		cin>>cmd>>n>>num;
		
		string number="";
		for(j=0;j<num.size();j++){
			char tmp=num[j];
			if(tmp==',' or tmp==']'){
				if(d.empty() and !number.empty()) d.push_back(stoi(number)); 
				else if(!d.empty()) d.push_back(stoi(number));
				number="";
				if(tmp==']') break;
			} else if(tmp=='['){
				continue;
			} else{
				number+=tmp;
			}
		}
		
		for(j=0;j<cmd.size();j++){
			if(cmd[j]=='R') reverse(d.begin(),d.end());
			else{
				if(d.empty()){
					ans="error";
					break;
				}
				d.pop_front();
			}
		}
		
		if(ans!="error" and d.empty()) ans="[]";
		if(ans!="error"){
			for(int k:d){
				ans+=to_string(k);
				ans+=",";
			}
		
			ans[ans.size()-1]=']';
		}

		cout<<ans<<endl;
	}

	return 0;
}
