#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//

ll power(ll x, ll y){
	ll cnt=0,temp=1,count=0,ans=1;
	while(cnt<y){
		temp=(temp*x)%mod;
		ans=(ans*temp)%mod;
		count++;
		cnt+=count;
		if(cnt+count>=y){
			return (power(x,y-cnt)*ans)%mod;
		}
		if(cnt==y){
			return ans%mod;
		}
	}
	return ans%mod;
}

void solve() {
	ll k,temp,sum,res,ans,n;
	cin>>n>>k;
	ans=0;
	For(i,1,n){
		temp=power(k,2*i-1);
		ans=(ans+temp)%mod;
		k=(k*temp)%mod;
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
