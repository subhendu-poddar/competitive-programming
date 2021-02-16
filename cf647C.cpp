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
	ll k,cnt,temp,sum,res,ans=0,n;
	cin>>n;
	ll a[63];
	a[0]=0;
	FOR(i,1,63){
		a[i]=i+2*a[i-1];
	}
	ll b[63];
	FOR(i,0,63){
		temp=1LL<<i;
		if((n&temp)!=0){
			b[i]=1;
		}
		else b[i]=0;
	}
	FOR(i,0,63){
		if(b[i]==1){
			ans+=a[i]+i+1;
		}
	}
	cout<<ans<<endl;




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