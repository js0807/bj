#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int k,n,i,ans=1000001;
	cin>>k>>n;
	set<int> s;
	for(i=0;i<k;i++){
		int a;
		cin>>a;
		s.insert(a);
		if(a<ans) ans=a;
	}

	while(true){
		int cnt=0,flag=0;
		set<int>::iterator it = s.begin();
		while(it!=s.end()){
			int d;
			if(flag==0){
				d=*it;
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
