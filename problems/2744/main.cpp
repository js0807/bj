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
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>=97) s[i]-=32;
        else s[i]+=32;
    }
    cout<<s<<endl;

    return 0;
}
