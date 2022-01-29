#include <iostream>
#include <algorithm>

using namespace std;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	int k,i,j;
	cin>>k;
	for(i=0;i<k;i++){
		int n,max=0,min=101,dmax=0;
		cin>>n;
		int *score = new int[n];
		for(j=0;j<n;j++){
			int s;
			cin>>s;
			score[j]=s;
		}
		
		sort(score,score+n);
		
		for(j=0;j<n-1;j++){
			int d=score[j+1]-score[j];
			if(d>dmax) dmax=d;
		}

		cout<<"Class "<<i+1<<"\n";
		cout<<"Max "<<score[n-1]<<", Min "<<score[0]<<", Largest gap "<<dmax<<endl;
	}

	return 0;
}
