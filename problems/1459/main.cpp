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
	int x,y,w,s,cost=0,i=0,j=0;
	cin>>x>>y>>w>>s;
	while(i!=x or j!=y){
		if(i!=x and j!=y){
			i++; j++;
			if(w<s){
				if(2*w<s) cost+=2*w;
				else cost+=s;
			} else{
				cost+=s;
			}
		} else{
			if(i==x and j!=y){
				if(w<s){
					j++;
					cost+=w;
				} else{
					j+=2;
					cost+=2*s;
				}
			}
			if(j==y and i!=x){
				if(w<s){
					i++;
					cost+=w;
				} else{
					i+=2;
					cost+=2*s;
				}
			}
		}
	}
	
	cout<<cost<<endl;

	return 0;
}
