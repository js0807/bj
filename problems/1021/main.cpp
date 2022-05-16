#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>

using namespace std;

int n,m,cnt;
deque<int> d;

void left_move(){
	int tmp=d.front();
	d.pop_front();
	d.push_back(tmp);
	cnt++;
}

void right_move(){
	int tmp=d.back();
	d.pop_back();
	d.push_front(tmp);
	cnt++;
}

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(){
	init();
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		d.push_back(i);
	}
	for(int i=1;i<=m;i++){
		int a; cin>>a;
		while(true){
			int x=d.front(),tmp,distance;
			if(x==a){d.pop_front();break;}
			else if(x>a){
				distance=x-a;
				if(distance>d.size()/2) left_move();
				else right_move();
			}
			else{
				distance=a-x;
				if(distance>d.size()/2) right_move();
				else left_move();
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}
