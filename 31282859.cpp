#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//
ll comparefn(pair<ll,ll> p1, pair<ll,ll> p2) {
	return p1.first>p2.first;
}
void solve() {
	ll i,j,k,temp=0,sum,res,ans,n;
	cin>>n;
	vector<pair<ll,ll> > v;
	FOR(i,0,n){
		cin>>k;
		v.push_back({k,i});
	}
	sort(v.begin(),v.end(),comparefn);
	ans=0;
	FOR(i,0,n){
		ans+=max((ll)(0),v[i].first-i);
		ans%=mod;
	}
	cout<<ans<<endl;

	

}

//-------------------------------------------------//

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t,i;
	//t=1;
	cin >> t;
	FOR(i,0,t) {
		solve();
	}

	return 0;
}