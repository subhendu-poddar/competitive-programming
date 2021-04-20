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
    ll k,temp,sum=powl((ll)2,32)-1,ans,n,dif;
    cin >> n;
    int count=n/2;
    vv<ll> a(n);//, suf(n,0);
    FOR(i,0,n){
        cin >> a[i];
    }
    
    vv<pair<int,pair<ll,ll>>> res;

    temp=0;
    FOR(i,1,n){
        if(a[i]<a[i-1]){
            temp++;
        }
    }
    if(temp<=count){
        FOR(i,1,n){
            if(a[i]<a[i-1]){
                dif = a[i-1]-a[i];
                res.pb({2,{i+1,dif+1}});
            }
        }
    }
    else{
        FOR(i,0,n){
            a[i] ^= sum;
        }
        res.pb({4,{1,sum}});
        FOR(i,1,n){
            if(a[i]<a[i-1]){
                dif = a[i-1]-a[i];
                res.pb({2,{i+1,dif+1}});
            }
        }
    }
    cout << res.size() << endl;
    FOR(i,0,res.size()){
        cout << res[i].ff << ' ' << res[i].ss.ff << ' ' << res[i].ss.ss << endl;
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