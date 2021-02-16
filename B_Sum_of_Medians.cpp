#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//


void solve() {
	ll k,temp,sum,res,ans=0,n,cnt=0;
    cin >> n >> k;
    vector<ll> a(n*k);
    FOR(i,0,n*k){
        cin >> a[i];
    }
    sort(a.begin(),a.end(), greater<ll>());
    ll pt = n-(n-1)/2;
    while(cnt<k){
        temp = pt*cnt+pt-1;
        ans += a[temp];
        cnt++;
    }
    cout << ans << endl;









}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}