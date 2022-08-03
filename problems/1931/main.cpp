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
    int n,cnt=0,t=0;
    vector< pair<pair<int,int>,int> > v;
    cin>>n;
    for(int i=0;i<n;i++){
        int b,e,diff; cin>>b>>e; diff=e-b;
        v.push_back(make_pair(make_pair(e,b),diff));
    }
    sort(v.begin(),v.end());
    for(auto k:v){
        if(t<=k.first.second){
            cnt++;
            t=k.first.first;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
