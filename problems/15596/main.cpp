#include <iostream>
#include <vector>

#define MAX 1000000

using namespace std;

vector<int> a(MAX);

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

long sum(vector<int> &a){
	long hab=0;
	while(a.size()!=0){
		hab+=a.back();
		a.pop_back();
	}
	
	return hab;
}

int main(){
	init();
	int n;
	
	return 0;
}
