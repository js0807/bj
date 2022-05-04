#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int prime_num[10001];
vector<int> pn;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void prime(){
	for(int i=2;i<=10000;i++){
		prime_num[i]=i;	
	}
	for(int i=2;i<=10000;i++){
		if(prime_num[i]==0) continue;
		for(int j=2*i;j<=10000;j+=i){
			prime_num[j]=0;
		}
	}
	/*
	for(int i=2;i<=10000;i++){
		if(prime_num[i]) pn.push_back(i);
	}
	*/
}

int main(){
	init();
	prime();
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int num; cin>>num;
		int mid=num/2;
		int front=mid,back=mid;
		while(true){
			if(!prime_num[front]) front--;
			if(!prime_num[back]) back++;
			if(prime_num[front] and prime_num[back]){
				if(front+back==num) break;
				if(front+back>num) front--;
				if(front+back<num) back++;
			}
		}
		cout<<front<<' '<<back<<'\n';
	}
	return 0;
}
