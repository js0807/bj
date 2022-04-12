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
	long long x,y,w,s,cost=0,i=0,j=0,tmp;
	cin>>x>>y>>w>>s;
	if(x>y) tmp=y;
	else tmp=x;
	while(i!=x or j!=y){
		if(i!=x and j!=y){
			i+=tmp; j+=tmp;
			if(w<s){
				if(2*w<s) cost+=2*w*tmp;
				else cost+=s*tmp;
			} else{
				cost+=s*tmp;
			}
		} else{
			if(i==x and j!=y){
				tmp=y-j;
				if(w<s or tmp==1){
					j+=tmp;
					cost+=w*tmp;
				} else{
					if(tmp%2==0){
						j+=tmp;
						cost+=s*tmp;
					} else{
						j+=tmp-1;
						cost+=s*(tmp-1);
					}
				}
			}
			if(j==y and i!=x){
				tmp=x-i;
				if(w<s or tmp==1){
					i+=tmp;
					cost+=w*tmp;
				} else{
					if(tmp%2==0){
						i+=tmp;
						cost+=s*tmp;
					} else{
						i+=tmp-1;
						cost+=s*(tmp-1);
					}
				}
			}
		}
	}
	
	cout<<cost<<endl;

	return 0;
}
