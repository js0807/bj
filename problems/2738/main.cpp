#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int a[101][101];

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    init();
    int n,m;
    cin>>n>>m;
    for(int k=0;k<2;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int r; cin>>r;
                a[i][j]+=r;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
