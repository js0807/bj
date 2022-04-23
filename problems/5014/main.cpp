#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 1000000

using namespace std;

vector<int> v(MAX+1);
vector<int> elev(MAX+1);
int f,s,g,u,d;

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void bfs(){
	queue<int> q;
	q.push(s);
	v[s]=1;
	elev[s]=f;
	while(!q.empty()){
		int tmp = q.front();
		q.pop();
		if(tmp+u<=f and !v[tmp+u]){
			q.push(tmp+u);
			elev[tmp+u]+=elev[tmp]+u;
			v[tmp+u]+=v[tmp]+1;
		}
		if(tmp-d>=1 and !v[tmp-d]){
			q.push(tmp-d);
			elev[tmp-d]+=elev[tmp]-d;
			v[tmp-d]+=v[tmp]+1;
		}
	}
}

int main(){
	init();
	cin>>f>>s>>g>>u>>d;
	bfs();
	if(v[g]==0) cout<<"use the stairs\n";
	else cout<<v[g]-1<<endl;
	return 0;
}
