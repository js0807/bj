#include <iostream>
#include <string>
#include <stack>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i,j,flag=0;
	stack<int> s;
	string ans="";

	cin>>n;
	int *a = new int[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>n) flag=1;
	}
	
	int num=0,before=num;
	for(i=0;i<n;i++){
		if(a[i]-before>0){
			for(j=num;j<a[i];j++){
				num++;
				s.push(num);
				ans+="+\n";
			}
			s.pop();
			ans+="-\n";
		} else{
			if(s.empty()) break;
			if(num>=n){
				if(s.top()!=a[i]) flag=1;
				s.pop();
				ans+="-\n";
			} else{
				for(j=a[i];j<before;j++){
					s.pop();
					ans+="-\n";
				}
			}
		}
		before=a[i];
	}

	if(flag==0) cout<<ans;
	else cout<<"NO"<<endl;

	return 0;
}
