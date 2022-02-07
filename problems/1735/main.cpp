#include <iostream>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int euclidean(int a, int b){
	int r = a%b;
	if(r==0) return b;
	return euclidean(b,r);
}

int main(){
	init();
	// n1/n2 , n3/n4
	int n1,n2,n3,n4,boonja,boonmo;
	cin>>n1>>n2>>n3>>n4;
	int rmax,max,small;

	max=euclidean(n2, n4);
		
	boonmo=n2*n4/max;
	boonja=(n1*(boonmo/n2))+(n3*(boonmo/n4));
	
	rmax=euclidean(boonja, boonmo);

	cout<<boonja/rmax<<' '<<boonmo/rmax<<endl;

	return 0;
}
