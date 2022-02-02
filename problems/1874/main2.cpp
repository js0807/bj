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
stack<int> chks;

/*
bool check(int size){
	int flag=0;
	for(int i=0;i<size-1;i++){
		if(arr[i]==size) flag=1;
		if(arr[i]-arr[i+1]>1 and flag==0){
			return false;
		}
		if(arr[i]<arr[i+1] and flag==1){
			return false;
		}
	}
	return true;
} 
*/

bool check(string ans){
	int num=0,j=0;
	for(int i=0;i<ans.size();i++){
		if(i%2==0){
			if(ans[i]=='+'){
				chks.push(++num);
			} else{
				if(chks.empty()) return false;
				if(chks.top()!=arr[j]) return false;
				chks.pop();
				j++;
			}
		}
	}
	return true;
}

string pm(int size,string ans){
	int num=0,b=0,i,j;
	for(i=0;i<size;i++){
		if(arr[i]-b>0){
			for(j=num;j<arr[i];j++){
				s.push(++num);
				ans+="+\n";
			}
			if(s.empty()) break;
			s.pop();
			ans+="-\n";
		} else{
			for(j=arr[i];j<b;j++){
				if(s.empty()) break;
				s.pop();
				ans+="-\n";
			}
		}
		b=arr[i];
	}
	return ans;
}

int main(){
	init();
	int n;
	string ans="";
	
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	/* check before making string
	if(!check(n)){
		cout<<"NO\n";
		exit(0);
	}
	else{
		ans=pm(n,ans);
		cout<<ans<<endl;
	}
	*/
	
	ans=pm(n,ans);
	if(check(ans)) cout<<ans;
	else cout<<"NO";

	return 0;
}
