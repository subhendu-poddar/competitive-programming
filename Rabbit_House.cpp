#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr pair<ll,ll>
#define setpr(x) fixed<<setprecision(10)<<x
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n,a) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define INF 1000000000000
#define max_heap priority_queue<ll>
#define min_heap priority_queue<ll,vv<ll>,greater<ll>>
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//

ll solve() {
    ll temp,sum,res,ans=0,n;
    int r,c;
    int x,y,z;
    int left, right, up, down;
    cin>>r>>c;
    vv<vv<int>> a(r+1, vv<int> (c+1,0));

    priority_queue<pair<int,pair<int,int>>> q;

    For(i,1,r){
        For(j,1,c){
            cin >> a[i][j];
            q.push({a[i][j], {i,j}});
        }
    }
    // cout << endl;

    while(!q.empty()){
        auto k = q.top();
        q.pop();
        x=k.ss.ff;
        y=k.ss.ss;

        // cout << x << ' '<< y << ' ' << k.ff<< endl;

        left=right=up=down=0;
        
        if(y>1){
            if(a[x][y-1] < a[x][y]-1){
                ans += (a[x][y] - 1 - a[x][y-1]);
                a[x][y-1] = a[x][y]-1;
                q.push({a[x][y-1], {x,y-1}});
            }
        }
        if(y<c){
            if(a[x][y+1] < a[x][y]-1){
                ans += (a[x][y] - 1 - a[x][y+1]);
                a[x][y+1] = a[x][y]-1;
                q.push({a[x][y+1], {x,y+1}});
            }
        }
        if(x>1){
            if(a[x-1][y] < a[x][y]-1){
                ans += (a[x][y] - 1 - a[x-1][y]);
                a[x-1][y] = a[x][y] - 1;
                q.push({a[x-1][y], {x-1,y}});
            }
        }
        if(x<r){
            if(a[x+1][y] < a[x][y]-1){
                ans += (a[x][y] - 1 - a[x+1][y]);
                a[x+1][y] = a[x][y] - 1;
                q.push({a[x+1][y], {x+1,y}});
            }
        }


        // For(i,1,r){
        //     For(j,1,c){
        //         cout << a[i][j] << ' ';
        //     }
        //     cout << endl;
        // }
        // cout << ans << endl;

    }

    return ans;



}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        // solve();
        cout << "Case #" << i << ": " << solve() << endl;
    }
    return 0;
}