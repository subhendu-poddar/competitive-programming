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

/* Accepted */
#define N 10000001
vv<ll> d(N,0), a(N,-1);

void check_out(){
    For(i,1,N){
        for(ll j=i;j<=N;j+=i){
            d[j] += i;
        }
    }
    For(i,1,N){
        if(d[i]<=N && a[d[i]]==-1){
            a[d[i]]=i;
        }
    }
}

void solve() {
    ll k,temp,sum,res,ans,n;
    cin >> n;
    cout << a[n] << endl;

}
int main(){
    IOS;
    ll t;
    //t=1;
    check_out();
    cin >> t;
    For(i,1,t) {
        solve();
        //cout << solve() << endl;
    }
    return 0;
}