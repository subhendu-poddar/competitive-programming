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
	ll k,cnt,temp,sum,res,n,a,b;
    cin >> n;
    vector<ll> v[n+1], check(n+1), ans(n+1);
    vector<bool> vis(n+1,false);
    For(i,1,n-1){
        cin >> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }
    string s;
    cin >> s;
    FOR(i,0,n){
        check[i+1]=s[i]-48;
    }
    
    vis[1]=true;
    ans[1]=1;
    For(i,1,n){
        if(vis[i]){
            continue;
        }
        FOR(j,0,v[i].size()){
            k = v[i][j];
            if(vis[k]){
                continue;
            }
            vis[k]=true;
            ans[k]= 1 - ans[i];
        }
    }
    ll ls = 0, rs = 0;
    FOR(i,0,n){
        if(s[i]-48!=ans[i+1]){
            ls++;
        }
        else{
            rs++;
        }
    }
    cout << min(ls,rs) << endl;

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