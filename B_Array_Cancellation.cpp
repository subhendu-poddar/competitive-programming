#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//
void solve() {
	ll k,cnt,temp=0,sum,res=0,ans=0,n;
    cin >> n;
    vector<ll> a(n), r(n,0), l(n,0);
    FOR(i,0,n) cin >> a[i];
    FOR(i,1,n){
        l[i] = max(l[i-1], l[i-1] + a[i-1]);
    }
    for(ll i=n-2;i>=0;i--){
        r[i] = max(r[i+1]+a[i+1],r[i+1]);
    }
    ll ltemp=0, rtemp=0;

    FOR(i,0,n){
        l[i]-=ltemp;

        if(a[i]<0){
            a[i]=-a[i];
            if(l[i]>=a[i]){
                l[i]-=a[i];
                ltemp+=a[i];
            }
            else{
                ltemp+=l[i];
                a[i] -= l[i];
                r[i]-= a[i];
                ans += a[i];
            }
        }
    }
    cout << ans << endl;

}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}