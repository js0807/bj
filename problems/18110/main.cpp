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
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        if(tmp != 0) v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    double r = n * 0.15 , sum = 0;
    int range = round(r);
    for(int i=0 + range; i<v.size() - range; i++)
        sum += v[i];
    sum /= (v.size() - 2 * range);
    sum = (int)(round(sum));

    if(v.size() == 0) cout<<0;
    else cout<<sum<<endl;
    return 0;
}
