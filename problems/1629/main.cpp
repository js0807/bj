#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int a,b,c;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int fpow(int c,int n){
    if(n==1) return c;
    else{
        int x=fpow(c,n/2);
        if(n%2==0) return x*x;
        else return x*x*c;
    }
}

int main(){
	init();
	cin>>a>>b>>c;
	cout<<fpow(a,b)%c<<endl;
    return 0;
}
