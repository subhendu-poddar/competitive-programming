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
    ll k,temp,sum,res,ans=0,n,m,x;
    cin >> n >> m >> x;

    for(ll i=1;i<=m;i++){
        k = min(i,n);
        if(k%2==1){
            ans ^= (x+i+1);
            // cout << (x+i+1) << endl;
        }
    }
    for(ll i=2;i<=n;i++){
        k = min(m,n-i+1);
        if(k%2==1){
            ans ^= (x+m+i);
            // cout << (x+i+m) << endl;
        }
    }
    // cout << endl;
    return ans;




    // if(n>=m){
    //     ll i;
    //     for(i=n;i>=1;i-=2){
    //         ans ^= (k+i);
    //     }
    //     for(i=1;i<m;i+=2){
    //         ans ^= (k+i);
    //     }
    // }
    // else{
    //     ll i;
    //     for(i=1;i<=m;i+=2){
    //         ans ^= (k+i);
    //     }
    //     for()
    // }



}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        //solve();
        cout << solve() << endl;
    }
    return 0;
}