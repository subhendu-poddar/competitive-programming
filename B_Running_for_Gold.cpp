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
#define min_heap priority_queue<pr,vv<pr>,greater<pr>>
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//

bool win(vv<ll>& a, vv<ll>& b){
    int x=0, y=0;
    FOR(i,0,5){
        if(a[i]<b[i]) x++;
        else y++;
    }
    return x>y;
}

ll solve() {
    ll k,temp,sum,res,ans,n;
    cin >> n;
    
    unordered_map<ll,bool> mp;
    mp.insert({0,true});
    vv<bool> ispos(n,true);

    vv<vv<ll>> a(n, vv<ll>(5));

    FOR(i,0,n){
        FOR(j,0,5){
            cin >> a[i][j];
        }
    }

    ll gold=0;

    FOR(i,1,n){
        if(win(a[i],a[gold])){
            gold=i;
        }
    }

    FOR(i,0,n){
        if(i==gold) continue;
        if(!win(a[gold],a[i])){
           return -1;
        }
    }

    return gold+1;

}

int main(){
    IOS;
    ll t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        // solve();
        cout << solve() << endl;
    }
    return 0;
}