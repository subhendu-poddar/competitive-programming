#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
void solve(){
    int n,i,j,d;
    cin>>n;
    int a[n][n];
	vector<vector<bool>> vis(n,vector<bool>(n,false));
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    cin>>d;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            
            if(a[i][j]==0 || vis[i][j]) continue;
            
            int count = 0;
            queue<pair<int,int>> q;
            q.push({i,j});
            vis[i][j]=true;
            
            while(!q.empty()){
                count++;
                auto x = q.front();
                vis[x.ff][x.ss]=true;
                q.pop();
                if(x.ff>0 && !vis[x.ff-1][x.ss] && a[x.ff-1][x.ss]==1){
                    q.push({x.ff-1,x.ss});
                }
                if(x.ss>0 && !vis[x.ff][x.ss-1] && a[x.ff][x.ss-1]==1){
                    q.push({x.ff,x.ss-1});
                }
                if(x.ff<n-1 && !vis[x.ff+1][x.ss] && a[x.ff+1][x.ss]==1){
                    q.push({x.ff+1,x.ss});
                }
                if(x.ss<n-1 && !vis[x.ff][x.ss+1] && a[x.ff][x.ss+1]==1){
                    q.push({x.ff,x.ss+1});
                }                
            }
            if(count==d){
                cout << i << ' '<< j << endl;
                return;
            }
            
        }
    }
    
}



int main(){
    // write your code
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    
    return 0;
}