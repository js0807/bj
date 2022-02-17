#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int n,k;
	double avg1=0.0,avg2=0.0;
	cin>>n>>k;
	vector<double> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(int i=k;i<n-k;i++){
		avg1+=v[i];
	}
	for(int i=0;i<k;i++){
		v[i]=v[k];
	}
	for(int i=n-1;i>n-k;i--){
		v[i]=v[n-k];
	}
	for(int i=0;i<n;i++){
		avg2+=v[i];
	}
	cout<<fixed;
	cout.precision(2);
	cout<<avg1/(n-k*2)<<endl;
	cout<<avg2/n<<endl;
	
	return 0;
}
