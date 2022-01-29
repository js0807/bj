#include <iostream>
#include <string>
#include <queue>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i;
	queue<int> q;
	cin>>n;
	for(i=0;i<n;i++){
		string s;
		cin>>s;
		if(s[0]=='p' && s[1]=='u'){
			int a;
			cin>>a;
			q.push(a);
		}
		if(s=="pop"){
			if(q.empty()) cout<<-1<<"\n";
			else{
				cout<<q.front()<<"\n";
				q.pop();
			}
		}
		if(s=="size") cout<<q.size()<<"\n";
		if(s=="empty") cout<<q.empty()<<"\n";
		if(s=="front"){
			if(q.empty()) cout<<-1<<"\n";
			else cout<<q.front()<<"\n";
		}
		if(s=="back"){
			if(q.empty()) cout<<-1<<"\n";
			else cout<<q.back()<<"\n";
		}
	}

	return 0;
}
