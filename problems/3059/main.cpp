#include <iostream>
#include <string>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int alpha[26];

int main(){
	init();
	for(int i=0;i<26;i++){
		alpha[i]=65+i;
	}

	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		bool a[26]={false,};
		int sum=0;
		cin>>s;
		for(int j=0;j<s.size();j++){
			a[s[j]-'A']=true;
		}
		for(int j=0;j<26;j++){
			if(!a[j]) sum+=alpha[j];
		}
		cout<<sum<<endl;
	}

	return 0;
}
