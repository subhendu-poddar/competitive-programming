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
	ll k,cnt,temp,sum,res,ans,n;
    cin >> n;
    ll a[n][n];
    vector<ll> v(n);
    FOR(i,0,n){
        FOR(j,0,n) cin >> a[i][j];
    }
    FOR(i,1,n){
        if(a[0][i]==i+1) v[i]=1;
        else v[i]=0;
    }
    ans=0;
    FOR(i,1,n){
        if(v[i]==0){
            if(i==1) ans++;
            else ans+=2;
            while(v[i]==0) ++i;
        }
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