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
ll solve() {
	ll k,cnt,temp,sum,res,ans=0,n;
	cin >> n;
    vector<ll> a(n), b(n);
    FOR(i,0,n) cin>>a[i];
    FOR(i,0,n) cin>>b[i];
    ll mina=INF, minb=INF;
    FOR(i,0,n) mina=min(mina,a[i]);
    FOR(i,0,n) minb=min(minb,b[i]);
    FOR(i,0,n){
        temp = min(a[i]-mina,b[i]-minb);
        ans+=temp;
        a[i]-=temp;
        b[i]-=temp;
    }
    FOR(i,0,n){
        ans+=(a[i]+b[i])-(mina+minb);
    }
    return ans;
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
		cout << solve() << endl;
	}

	return 0;
}