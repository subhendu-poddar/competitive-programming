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
bool ispossible(ll a[], ll n, ll k){
	map<ll,bool> mp;
	FOR(i,0,n) mp[a[i]]=true;
	FOR(i,0,n){
		if(!mp[a[i]^k]) return false;
	}
	return true;
}

void solve() {
	ll k,cnt,temp,sum,res,ans,n;
	cin>>n;
	ll a[n];
	FOR(i,0,n) cin>>a[i];
	k=INF;
	FOR(i,1,n){
		temp=a[0]^a[i];
		if(ispossible(a,n,temp)){
			k=min(k,temp);
		}
	}
	if(k==INF) k=-1;
	cout<<k<<endl;

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