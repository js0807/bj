#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	string n;
	int m,num[3]={0},cnt[3]={0};
	bool *arr = new bool[10];
	fill_n(arr,10,false);
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		arr[a]=true;
	}
	//upper start
	cnt[0]=n.size();
	for(int i=0;i<n.size();i++){
		int maxi=0;
		for(int j=0;j<10;j++){
			int tmp=n[i]-'0';
			if(tmp==0) tmp=10;
			if(!arr[j] and j<=tmp) maxi=j;
		}
		num[0]+=maxi*pow(10,n.size()-i-1);
	}
	cnt[0]+=stoi(n)-num[0];
	//upper end
	//downer start
	cnt[1]=n.size();
	for(int i=0;i<n.size();i++){
		int mini=10;
		for(int j=9;j>=0;j--){
			int tmp=n[i]-'0';
			if(!arr[j] and j>=tmp) mini=j;
		}
		num[1]+=mini*pow(10,n.size()-i-1);
	}
	cnt[1]+=num[1]-stoi(n);
	//downer end
	//just button start
	num[2]=stoi(n); 
	if(num[2]>100) cnt[2]=num[2]-100;
	else cnt[2]=100-num[2];
	//just button end
	int ans=INT32_MAX;
	vector<int> v;
	for(int i=0;i<3;i++){
		cout<<cnt[i]<<' ';
		if(cnt[i]>=0) v.push_back(cnt[i]);
	}
	cout<<'\n';
	for(auto k:v){
		if(k<ans) ans=k;
	}
	cout<<ans<<endl;
	return 0;
}
