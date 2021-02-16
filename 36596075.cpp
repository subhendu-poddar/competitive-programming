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
    cin >> n;
    vector<pair<ll,ll>> v(n+1);
	vector<ll> power(n+1,0);
	power[0]=1;
	For(i,1,n){
		power[i]=(power[i-1]*2)%mod;
	}
	For(i,1,n){
		cin >> v[i].first;
	}
	sort(v.begin()+1,v.end());
	For(i,1,n){
		v[i].second=power[n-i];
	}
	map<ll,ll> mp;
	For(i,1,n){
		mp[v[i].first]= (mp[v[i].first]+v[i].second)%mod;
	}
	For(i,1,n){
		cout << mp[i] << ' ';
	}
	cout << endl;


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