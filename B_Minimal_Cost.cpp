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
    ll k,temp=-1000,sum,res,ans=INT_MAX,n,u,v;
    cin>>n>>u>>v;
    unordered_set<ll> uset;
    vv<ll> a(n);

    FOR(i,0,n){
        cin>>k;
        uset.insert(k);
        if(temp==-1000 || temp==k-1 || temp==k || temp==k+1){
            temp=k;
        }
        else{
            ans=0;
        }
    }
    if(ans==0){
        return ans;
    }
    //cout << uset.size() << endl;
    if(uset.size()==1){
        return min(2*v,u+v);
    }
    return min(u,v);
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