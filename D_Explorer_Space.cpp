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
void solve() {
    ll k,temp,sum=-1,res,n,r,c,left,right,up,down;
    cin >> r >> c >> k;
    vv<vv<ll>> h(r,vv<ll>(c-1)), v(r-1,vv<ll>(c)), ans(r,vv<ll>(c,INT_MAX)), last(r,vv<ll>(c,0));
    FOR(i,0,r){
        FOR(j,0,c-1){
            cin >> h[i][j];
        }
    }
    FOR(i,0,r-1){
        FOR(j,0,c){
            cin >> v[i][j];
        }
    }

    if(k%2!=0){
        FOR(i,0,r){
            FOR(j,0,c){
                cout << -1 << ' ';
            }
            cout << endl;
        }
        return;
    }

    for(temp=2; temp<=k; temp+=2){

        FOR(i,0,r){
            FOR(j,0,c){

                left=right=up=down=INT_MAX;
                if(i<r-1){
                    down = 2*v[i][j]+last[i+1][j];
                }
                if(i>0){
                    up = 2*v[i-1][j]+last[i-1][j];
                }
                if(j<c-1){
                    right = 2*h[i][j]+last[i][j+1];
                }
                if(j>0){
                    left = 2*h[i][j-1]+last[i][j-1];
                }


                ans[i][j] = min(min(left, right), min(up, down));
            }
        }

        // FOR(i,0,r){
        //     FOR(j,0,c){
        //         cout << ans[i][j] << ' ';
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        FOR(i,0,r){
            FOR(j,0,c){
                last[i][j] = ans[i][j];
            }
        }
    }

    FOR(i,0,r){
        FOR(j,0,c){
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }







}
int main(){
    IOS;
    // ll t;
    // //t=1;
    // cin >> t;
    // For(i,1,t) {
    //     solve();
    //     //cout << solve() << endl;
    // }
    solve();
    return 0;
}