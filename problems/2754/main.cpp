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
    //init();
    double score=0.0;
    char a,b;
    scanf("%c",&a);
    if(a!='F'){
        if(a=='A') score+=4.0;
        if(a=='B') score+=3.0;
        if(a=='C') score+=2.0;
        if(a=='D') score+=1.0;
        scanf("%c",&b);
        if(b=='+') score+=0.3;
        if(b=='-') score-=0.3;
    }
    printf("%.1f\n",score);
    return 0;
}
