#include <iostream>
#include <string>
#include <stack>

#define MAX 100000

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int arr[MAX];
stack<int> s;

void check(int n){
	string ans="";
	int j=0;
	for(int i=1;i<=n;i++){
		s.push(i);
		ans+="+\n";

		while(!s.empty() && s.top()==arr[j]){
			s.pop();
			ans+="-\n";
			j++;
		}
	}
	if(!s.empty()) cout<<"NO\n";
	else cout<<ans;
}
int main(){
	init();
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	check(n);
	return 0;
}
