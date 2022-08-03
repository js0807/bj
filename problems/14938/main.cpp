#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 100

using namespace std;

int n,m,r;
int g[MAX+1][MAX+1],bg[MAX+1][MAX+1],cost[MAX+1];
bool visited[MAX+1];

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void swap_g(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            swap(g[i][j],bg[i][j]);       
        }
    }
}

void show_g(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<g[i][j]<<' ';
        }
        cout<<'\n';
    }
}

int main(){
	init();
	cin>>n>>m>>r;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            g[i][j]=10001;
            bg[i][j]=10001;
        }
    }
	for(int i=1;i<=n;i++){
        cin>>cost[i];
	}
    for(int i=1;i<=r;i++){
        int x,y,c;
        cin>>x>>y>>c;
        g[x][y]=c; g[y][x]=c;
        bg[x][y]=c; bg[y][x]=c;
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                g[i][j]=min(bg[i][j],bg[i][k]+bg[k][j]);
            }
        }
        if(k!=n) swap_g();
    }
    int *sum = new int[n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j or g[i][j]<=m) {
                sum[i]+=cost[j];
            }
        }
    }
    sort(sum,sum+n+1);
    cout<<sum[n]<<endl;
	return 0;
}
