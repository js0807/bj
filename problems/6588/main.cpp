#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int prime_num[1000001];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void prime(){
	for(int i=2;i<=1000000;i++){
		prime_num[i]=i;	
	}
	for(int i=2;i<=1000000;i++){
		if(prime_num[i]==0) continue;
		for(int j=2*i;j<=1000000;j+=i){
			prime_num[j]=0;
		}
	}
}

int main(){
	init();
	prime();
	while(true){
		int num; cin>>num;
		if(num==0) break;
		int front=2,back=num;
		bool flag=false;
		while(true){
			if(front>num/2 or back<num/2) break;
			if(!prime_num[front]) front++;
			if(!prime_num[back]) back--;
			if(prime_num[front] and prime_num[back]){
				if(front+back==num){flag=true;break;}
				if(front+back>num) back--;
				if(front+back<num) front++;
			}
		}
		if(flag) cout<<num<<" = "<<front<<" + "<<back<<'\n';
		else cout<<"Goldbach's conjecture is wrong.\n";
	}
	return 0;
}
