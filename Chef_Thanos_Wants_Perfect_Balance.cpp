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
	ll k,cnt,temp,sum,a,b,res,ans,n,m;
    cin >> n >> m;
    vector<ll> u[n+1],v[n+1];
    vector<pair<ll,ll>> pr(m);
    map<pair,ll,ll>,ll> mp;
    FOR(i,0,m){
        cin >> a >> b;
        pr.pb({a,b});
        if(a>b){
            swap(a,b);
        }
        u[a].pb(b);
        v[b].pb(a);
        mp[{a,b}]=1;
    }
    map<ll,ll> freq;
    For(i,1,n){
        freq[i]=u[i].size() + v[i].size();
    }
    vector<bool> vis(n+1,false);

    For(i,1,n){
        if(freq[i]==0){
            continue;
        }
        FOR(j,0,u[i].size()){
            if(freq[i]>1 && freq[u[i][j]]>1){
                map[{i,u[i][j]}]=-1;
                freq[u[i][j]]-=2;
                freq[i]-=2;
            }
            if(freq[i]%2!=0 && freq[u[i][j]]>0){
                map[{i,u[i][j]}]=0;
                freq[u[i][j]]-=1;
                freq[i]-=1;                
            }
        }
    }
    For(i,1,n){
        if(freq[i])
    }


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