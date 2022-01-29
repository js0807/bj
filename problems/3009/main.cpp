#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int i,xminc=0,xmaxc=0,yminc=0,ymaxc=0;
	int xmin=1001,xmax=0,ymin=1001,ymax=0;
	int a[3][2];
	for(i=0;i<3;i++){
		cin>>a[i][0]>>a[i][1];
		if(a[i][0]<xmin) xmin=a[i][0];
		if(a[i][0]>xmax) xmax=a[i][0];
		if(a[i][1]<ymin) ymin=a[i][1];
		if(a[i][1]>ymax) ymax=a[i][1];
	}
	for(i=0;i<3;i++){
		if(a[i][0]==xmin) xminc++;
		if(a[i][0]==xmax) xmaxc++;
		if(a[i][1]==ymin) yminc++;
		if(a[i][1]==ymax) ymaxc++;
	}

	int flag=0;
	if(xminc==1 && yminc==1) cout<<xmin<<" "<<ymin<<endl;
	if(xminc==1 && ymaxc==1) cout<<xmin<<" "<<ymax<<endl;
	if(xmaxc==1 && yminc==1) cout<<xmax<<" "<<ymin<<endl;
	if(xmaxc==1 && ymaxc==1) cout<<xmax<<" "<<ymax<<endl;
	return 0;
}
