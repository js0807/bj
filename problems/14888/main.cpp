#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n,mini=100000001,maxi=-100000001;
vector<int> v,arr;
int op[4],visited[4];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int calc(int result){
	int b;
	for(int i=0;i<arr.size();i++){
		if(i%2==0) b=arr[i];
		else{
			if(arr[i]==0) result+=b+arr[i+1];
			if(arr[i]==1) result+=b-arr[i+1];
			if(arr[i]==2) result+=b*arr[i+1];
			if(arr[i]==3) result+=b/arr[i+1];
		}
	}
	arr.clear();
	return result;
}

void backtrack(int x, int cnt){
	if(cnt==n-1){
		arr.push_back(v[n-1]);
		int result=calc(0);
		if(result>maxi) maxi=result;
		if(result<mini) mini=result;
	}
	for(int i=x;i<n-1;i++){
		arr.push_back(v[i]);
		for(int j=0;j<4;j++){
			if(op[j] and !visited[j]){
				arr.push_back(j);
				op[j]--;
				visited[j]++;
				backtrack(x+1,cnt+1);
				arr.pop_back();
				op[j]++;
			}
		}
		arr.pop_back();
	}
}

int main(){
	init();
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<4;i++){
		cin>>op[i];
	}

	backtrack(0,0);
	cout<<maxi<<endl<<mini<<endl;

	return 0;
}
