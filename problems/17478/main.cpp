#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dq(int x,string *s){
	if(x>n) return;
	string line="____";
	string ans="\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<x;j++){
			cout<<line;
		}
		if(x==n and i==1){cout<<ans;break;}
		cout<<s[i];
	}
	dq(x+1,s);
	for(int i=0;i<x;i++){
		cout<<line;
	}
	cout<<"라고 답변하였지.\n";
}

int main(){
	init();
	cin>>n;
	string s[4]={
		"\"재귀함수가 뭔가요?\"\n",
		"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n",
		"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n",
		"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n"
	};
	cout<<"어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
	dq(0,s);
	return 0;
}
