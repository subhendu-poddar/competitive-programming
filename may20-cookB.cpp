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
ll power (ll base,ll exponent)
{
    ll ans=1;
    while(exponent!=0)
    {
      if(exponent&1) ans=(1LL*ans*base)%mod;
      base=(1LL*base*base)%mod;
      exponent>>=1;
    }
    return ans;
}
bool check(vector<ll> v, ll st, ll end){
	ll mid=(st+end)/2;
	ll size=end-mid;
	if(((v[mid]-v[st-1])*power(26,size))%mod==(v[end]-v[mid])) return true;
	return false;
}
void solve() {
	ll k,cnt,temp,sum,res,ans,n,st=1;
	string s;
	cin>>s;
	s='0'+s;
	vector<ll> arr(s.size());
	n=s.size()-1;
	arr[0]=0;
	FOR(i,1,s.size()){
		arr[i]=(power(26,i)*(s[i]-97))%mod;
	}
	FOR(i,2,s.size()){
		arr[i]+=arr[i-1];
	}
	ans=0;
	for(ll i=2;i<s.size()-2;i+=2){
		string p1,p2,p3,p4;
		p1=s.substr(1,i/2);
		p2=s.substr(i/2+1,i/2);
		p3=s.substr(i+1,(n-i)/2);
		p4=s.substr(i+1+(n-i)/2,(n-i)/2);	
		if(p1==p2 && p3==p4) {
			ans++;
		}
	}
	cout<<ans<<endl;

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