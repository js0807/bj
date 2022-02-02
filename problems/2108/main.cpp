#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>

#define MAX 500000

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,i,min=4001,max=-4001;
	double avg=0.0;
	multiset<int> s;
	cin>>n;

	int *arr = new int[n];
	for(i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		arr[i]=tmp;
		s.insert(tmp);
		avg+=tmp;
		if(tmp<min) min=tmp;
		if(tmp>max) max=tmp;
	}

	sort(arr,arr+n);
	
	int most,cnt=0,same=0,before=-4001;
	for(auto k:s){
		if(before==k) continue;
		if(cnt<s.count(k)){
			cnt=s.count(k);
			most=k;
			same=0;
		} else if(cnt==s.count(k) and same==0){
			same++;
			most=k;
		}
		before=k;
	}

	cout<<floor(avg/n+0.5)<<endl;
	cout<<arr[n/2]<<endl;
	cout<<most<<endl;
	cout<<max-min<<endl;
	
	return 0;
}
