#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int k,n,i,j,ans=1000001;
	cin>>k>>n;
	int *a = new int[k];
	for(i=0;i<k;i++){
		cin>>a[i];
		if(a[i]<ans) ans=a[i];
	}

	while(true){
		int cnt=0,it=0,flag=0;
		while(it<k){
			int d;
			if(flag==0){
				d=a[it];
				flag++;
			}
			d-=ans;
			if(d>=0) cnt++;
			if(d<=0){
				it++;
				flag--;
			}
		}
		if(cnt==n) break;
		ans--;
	}

	cout<<ans<<endl;
	
	return 0;
}
