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
    ll k,temp,sum,res,ans,n;
    cin >> n;
    vv<ll> q(n+1), mx, mn;
    For(i,1,n){
        cin >> q[i];
    }
    unordered_map<ll,bool> mp;

    ll maxv = 0, val = 1;

    For(i,1,n){
        if(q[i]>maxv){
            mn.pb(q[i]);
            mp[q[i]]= true;
            maxv = q[i];
            if(val==maxv) val++;
        }
        else{
            mn.pb(val);
            mp[val]=true;
            val++;
            while(mp[val]) val++;
        }
    }

    mp.clear();
    maxv = 0;
    val = 1;

    For(i,1,n){
        if(q[i]>maxv){
            mx.pb(q[i]);
            mp[q[i]]=true;
            maxv=q[i];
            if(maxv>1 && !mp[maxv-1]){
                val = maxv-1;
            }
        }
        else{
            mx.pb(val);
            mp[val]=true;
            val--;
            while(mp[val]) val--;
        }
    }



    FOR(i,0,n){
        cout << mn[i] << ' ';
    }
    cout << endl;

    FOR(i,0,n){
        cout << mx[i] << ' ';
    }
    cout << endl;
    


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