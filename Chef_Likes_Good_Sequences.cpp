#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//


void solve() {
	ll k,sum,res,ans,n,q,x,y;
    cin >> n >> q;
    vector<ll> a(n);
    FOR(i,0,n) cin >> a[i];
    ans=1;
    FOR(i,1,n){
        if(a[i]!=a[i-1]) ans++;
    }
    while(q--){
        cin >> x >> y;
        x--;
        if(a[x]==y){
            cout << ans << endl;
            continue;
        }

        if(x!=0 && a[x-1]==y) ans--;
        if(x!=0 && a[x]==a[x-1]) ans++;

        if(x!=n-1 && a[x+1]==y) ans--;
        if(x!=n-1 && a[x]==a[x+1]) ans++;

        cout << ans << endl;
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}