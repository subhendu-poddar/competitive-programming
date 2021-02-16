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
bool compare(pair<ll,ll> &a, pair<ll,ll> &b){
	return (a.second)<(b.second);
}
void solve() {
	ll k,cnt,temp,sum,res,ans,n;
	cin>>n>>k;
	ll arr[n];
	FOR(i,0,n) cin>>arr[i];
	vector<pair<ll,ll>> v(40);
	FOR(i,0,40){
		temp=1<<i;
		sum=0;
		FOR(j,0,n){
			sum+=(arr[j]&temp);
		}
		v[i].first=i;
		v[i].second=sum;
	}
	FOR(i,0,40) {
		cout<<v[i].second<<' ';
	}
	cout<<endl;
	FOR(i,0,40) {
		cout<<v[i].first<<' ';
	}
	cout<<endl;
	sort(v.begin(),v.end(),compare);
	FOR(i,0,40) {
		cout<<v[i].first<<' ';
	}
	cout<<endl;
	ans=0;
	FOR(i,0,k){
		ans+=pow(2,v[i].second);
	}
	//cout<<ans<<endl;

}


int main()
{
	freopen("input.txt", "r", stdin);
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