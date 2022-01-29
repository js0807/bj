#include <iostream>
#include <string>
#include <list>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,size=0;
	list<int> l;
	cin>>n;

	for(int i=0;i<n;i++){
		string s;
		cin>>s;

		int a;
		//push_back
		if(s[0]=='p' && s[1]=='u' && s[5]=='b'){
			cin>>a;
			l.push_back(a);
			size++;
		}

		//push_front
		if(s[0]=='p' && s[1]=='u' && s[5]=='f'){
			cin>>a;
			l.push_front(a);
			size++;
		}
		
		//pop_back
		if(s[0]=='p' && s[1]=='o' && s[4]=='b'){
			if(l.empty()) cout<<"-1\n";
			else{
				cout<<l.back()<<endl;
				l.pop_back();
				size--;
			}
		}

		//pop_front
		if(s[0]=='p' && s[1]=='o' && s[4]=='f'){
			if(l.empty()) cout<<"-1\n";
			else{
				cout<<l.front()<<endl;
				l.pop_front();
				size--;
			}
		}

		if(s=="size"){
			cout<<size<<endl;
		}

		if(s=="empty"){
			if(size==0) cout<<"1\n";
			else cout<<"0\n";
		}

		if(s=="front"){
			if(l.empty()) cout<<"-1\n";
			else cout<<l.front()<<endl;
		}

		if(s=="back"){
			if(l.empty()) cout<<"-1\n";
			else cout<<l.back()<<endl;
		}
	}

	return 0;
}
