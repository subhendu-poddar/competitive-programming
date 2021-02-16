#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll i,j,k,n,m,t,sum=0;
    cin >> n;
    ll a[n],b[n];
    for(i=0;i<n;i++) cin >> a[i];
    for(i=0;i<n;i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++) {
        sum+=min(a[i],b[i]);
    }
    cout << sum << endl;
    
    
    
}


int main() {
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}