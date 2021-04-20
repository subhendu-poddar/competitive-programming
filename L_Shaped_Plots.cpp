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
    ll k,temp,sum,res,ans=0,n;
    int x,y;
    int r,c;
    cin>>r>>c;
    vv<vv<int>>  rf((r+1),vv<int>(c+1,0)), cf((r+1),vv<int>(c+1,0)), rr((r+1),vv<int>(c+1,0)), cr((r+1),vv<int>(c+1,0));
    For(i,1,r){
        For(j,1,c){
            cin >> rf[i][j];
            cf[i][j] = rf[i][j];
            rr[i][j] = rf[i][j];
            cr[i][j] = rf[i][j];
        }
    }
    rev(i,r,1){
        rev(j,c,1){
            if(rr[i][j]==1 && j<c){
                rr[i][j] += rr[i][j+1];
            }
            if(cr[i][j]==1 && i<r){
                cr[i][j] += cr[i+1][j];
            }
        }
    }
    For(i,1,r){
        For(j,1,c){
            if(rf[i][j]==1){
                rf[i][j] += rf[i][j-1];
            }
            if(cf[i][j]==1){
                cf[i][j] += cf[i-1][j];
            }
        }
    }

    For(i,1,r){
        For(j,1,c){
            x = rf[i][j];
            y = cf[i][j];
            ans += max(0,min(x-1,y/2-1)) + max(0,min(x/2-1,y-1));

            x = rr[i][j];
            y = cf[i][j];
            ans += max(0,min(x-1,y/2-1)) + max(0,min(x/2-1,y-1));

            x = rr[i][j];
            y = cr[i][j];
            ans += max(0,min(x-1,y/2-1)) + max(0,min(x/2-1,y-1));

            x = rf[i][j];
            y = cr[i][j];
            ans += max(0,min(x-1,y/2-1)) + max(0,min(x/2-1,y-1));


        }
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