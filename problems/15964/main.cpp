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
    long long a,b;
    cin>>a>>b;
    cout<<(a+b)*(a-b)<<endl;

    return 0;
}
