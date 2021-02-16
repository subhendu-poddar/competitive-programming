#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000

int main(){
    ll n,k;
    cin >> n;
    vector<ll> a(4,0);
    FOR(i,0,n){
        cin >> k;
        a[k]++;
    }
    cout << min(a[1]+a[2],min(a[2]+a[3],a[3]+a[1])) << endl;
    return 0;
}