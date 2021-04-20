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
    ll k,q,x,temp,sum,res,n;
    cin >> n >> q;
    vv<ll> a(n), t(q), ans(51,INT_MAX);
    FOR(i,0,n){
        cin >> a[i];
    }
    
    FOR(i,0,n){
        ans[a[i]] = min(ans[a[i]], i+1);
    }

    FOR(i,0,q){
        cin >> x;
        temp = ans[x];
        cout << temp << ' ';

        For(j,1,50){
            if(j==x) {
                ans[j]=1;
                continue;
            }
            if(ans[j]<temp){
                ans[j]++;
            }
        }
    }

}
int main(){
    IOS;
    solve();
    //cout << solve() << endl;
    return 0;
}