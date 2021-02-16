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
	ll k,cnt,temp,sum,res,ans,n;
    cin >> n >> k;
    ll l[n], r[n], a[n];

    FOR(i,0,n) cin >> a[i];
    FOR(i,0,n) cin >> temp;

    sort(a,a+n);
    ll j=0;
    FOR(i,0,n){
        while((a[i]-a[j])>k){
            ++j;
        }
        l[i] = i-j+1;
        if(i>0) l[i] = max(l[i],l[i-1]);
    }
    j=n-1;
    for(ll i=n-1;i>=0;i--){
        while((a[j]-a[i])>k){
            --j;
        }
        r[i] = j-i+1;
        if(i<n-1) r[i]=max(r[i],r[i+1]);
    }
    ans=1;
    FOR(i,1,n){
        ans = max(ans,l[i-1]+r[i]);
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