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
    ll k,temp,sum,res,ans,n,m,pos;
    cin >> n >> m;
    vv<vv<ll>> b(n,vv<ll>(m));
    vv<ll> a;
    FOR(i,0,n){
        FOR(j,0,m){
            cin >> b[i][j];
        }
        // a.pb(temp);
    }

    FOR(i,0,n){
        sort(b[i].begin(), b[i].end());
    }

    // FOR(i,0,n){
    //     FOR(j,0,m){
    //         cout << b[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    FOR(j,0,m-1){
        temp = INF;
        pos=-1;
        FOR(i,0,n){
            if(temp>b[i][j]){
                pos=i;
                temp=b[i][j];
            }
        }
        FOR(i,0,n){
            if(i!=pos){
                rev(l,m-2,j){
                    swap(b[i][l], b[i][l+1]);
                }
            }
        }
    }


    FOR(i,0,n){
        FOR(j,0,m){
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }


}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        solve();
        //cout << solve() << endl;
    }
    return 0;
}