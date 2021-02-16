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
	ll k,cnt,temp,sum,ans,n;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll,ll> mp[n], cmap;
    FOR(i,0,n){
        cin >> v[i];
    }
    vector<vector<ll>> f(n);
    FOR(i,0,n){
        f[i]=vector<ll> (n);
    }
    FOR(i,0,n){
        f[i][i]=k;
        mp[i][v[i]]++;
    }

    For(l,2,n){
        FOR(i,l-1,n){
            ll j=v[i-l+1];
            mp[i][j]++;
            if(mp[i][j]==1){
                f[i-l+1][i]=f[i-l+2][i];
            }
            else if(mp[i][j]==2){
                f[i-l+1][i]=f[i-l+2][i]+2;
            }
            else{
                f[i-l+1][i]=f[i-l+2][i]+1;
            }
        }
    }

    FOR(i,0,n){
        FOR(j,0,i){
            f[0][i]=min(f[0][i],f[0][j]+f[j+1][i]);
        }
    }
    cout << f[0][n-1] << endl;





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