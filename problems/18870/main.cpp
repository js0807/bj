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
	int n,i;
	cin>>n;
	vector<int> v(n),r;
	for(i=0;i<n;i++){
		cin>>v[i];
		r.push_back(v[i]);
	}
	sort(r.begin(),r.end());
	r.erase(unique(r.begin(),r.end()),r.end());
	for(i=0;i<n;i++){
<<<<<<< Updated upstream
		//v[i]=find(r.begin(),r.end(),v[i])-r.begin();
		v[i]=lower_bound(r.begin(),r.end(),v[i])-r.begin();
=======
		//v[i]=find(r.begin(),r.end(),v[i])-r.begin(); too slow
		v[i]=lower_bound(r.begin(),r.end(),v[i]);
>>>>>>> Stashed changes
	}
	for(i=0;i<n;i++) cout<<v[i]<<' ';
	cout<<'\n';
	return 0;
}
