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
	ll k,temp,sum,res,ans,n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	vector<ll> v(26,0);
	FOR(i,0,n){
		v[s[i]-97]++;
	}
	sort(v.begin(),v.end());
	For(i,1,q){
		cin>>k;
		ans=0;
		FOR(i,0,26){
			if(v[i]>k) ans+=v[i]-k;
		}
		cout<<ans<<endl;	
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