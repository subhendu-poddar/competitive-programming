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
string solve() {
    ll k,temp,sum,res,ans,n;
    ll u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    ll uc=0, rc=0, dc=0, lc=0;

    u-=2;
    r-=2;
    d-=2;
    l-=2;

    if(u<0 && r<n-2){
        u++;
        r++;
    }
    else if(r<0 && u<n-2){
        u++;
        r++;
    }

    if(r<0 && d<n-2){
        d++;
        r++;
    }
    else if(d<0 && r<n-2){
        d++;
        r++;
    }

    if(d<0 && l<n-2){
        d++;
        l++;
    }
    else if(l<0 && d<n-2){
        d++;
        l++;
    }
    if(l<0 && u<n-2){
        u++;
        l++;
    }
    else if(u<0 && l<n-2){
        u++;
        l++;
    }


    if(u<0 || r<0 || d<0 || l<0){
        return "NO";
    }
    return "YES";
    


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