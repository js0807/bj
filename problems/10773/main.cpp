#include <iostream>
#include <stack>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int k,i;
	cin>>k;
	stack<int> stk;
	for(i=0;i<k;i++){
		int n;
		cin>>n;
		if(n==0) stk.pop();
		else stk.push(n);
	}

	int sum=0,size=stk.size();
	for(i=0;i<size;i++){
		sum+=stk.top();
		stk.pop();
	}
	
	cout<<sum<<endl;

	return 0;
}
