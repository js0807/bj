#include <iostream>
#include <string>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int flag=1;
		string s;
		bool *a = new bool[27];
		for(int j=0;j<27;j++) a[j]=false;
		cin>>s;
		for(int j=0;j<s.size();j++){
			if(a[s[j]-'a']==false) a[s[j]-'a']=true;
			else{
				if(s[j-1]==s[j]) continue;
				flag=0;
			}
		}
		if(flag) cnt++;
	}

	cout<<cnt<<endl;

	return 0;
}
