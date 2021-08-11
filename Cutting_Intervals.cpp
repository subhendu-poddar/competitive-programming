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
bool fn(pr a, pr b){
    if(a.ff==b.ff) return a.ss>b.ss;
    return a.ff<b.ff;
}

void solve() {
    ll temp=1,sum,res,ans,n,c,x,y,l,r;
    cin >> n >> c;
    ans=n;
    ll count=0;

    vv<pr> a;
    vv<pr> v;
    FOR(i,0,n){
        cin >> l >> r;
        a.pb({l,1});
        a.pb({r,-1});
    }
    sort(a.begin(), a.end());

    FOR(i,1,a.size()){
        
        if(a[i].ss!=a[i-1].ss){
            if(a[i].ss==1){
                v.pb({count,a[i].ff-a[i-1].ff+1});
            }
            else{
                v.pb({count+1,a[i].ff-a[i-1].ff-1});
            }
        }
        else{
            if(v[i].ss==1){
                v.pb({++count,a[i].ff-a[i-1].ff});
            }
            else{
                v.pb({--count,a[i].ff-a[i-1].ff});
            }
        }
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    FOR(i,0,v.size()){
        cout << v[i].ff << ' ' << v[i].ss << endl;
    }


    ll pos=0;
    while(c>0 && pos<v.size()){
        if(v[pos].ss<=c){
            ans += v[pos].ff*v[pos].ss;
            c-=pos;
        }
        else{
            ans += v[pos].ff*c;
            c=0;
        }
        pos++;
    }

    cout << ans << endl;


}
int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        cout << "Case #" << i << ": ";
        solve();
        //cout << solve() << endl;
    }
    return 0;
}