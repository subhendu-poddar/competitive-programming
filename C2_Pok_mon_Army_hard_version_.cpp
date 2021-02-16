#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//
bool localMaxima(vector<ll> v, ll x){
    if(v[x]>v[x-1] && v[x]>v[x+1]) return true;
    return false;
}
bool localMinima(vector<ll> v, ll x){
    if(v[x]<v[x-1] && v[x]<v[x+1]) return true;
    return false;
}

ll solve() {
	ll k,temp=5,sum,res,ans,n,q;
    cin >> n >> q;
    vector<ll> v(n+2), x(q), y(q), local;
    unordered_map<ll,bool> mp;
    v[0]=v[n+1]=-INF;
    For(i,1,n) cin >> v[i];
    FOR(i,0,q){
        cin >> x[i] >> y[i];
    }
    if(v[1]>v[0] && v[1]>v[2]) {
        local.pb(v[1]);
        mp[1]=true;
    }
    For(i,2,n){
        if(i==n && !localMaxima(v,n)){
            continue;
        }
        if(localMaxima(v,i) || localMinima(v,i)){
            local.pb(v[i]);
            mp[i]=true;
        }
    }
    ans=0;
    k=0;
    while(k<local.size()){
        ans+=local[k++];
        if(k<local.size()){
            ans-=local[k++];
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