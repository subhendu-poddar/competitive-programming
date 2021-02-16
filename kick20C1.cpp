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
	ll k,cnt,temp,sum,res,ans=0,n,j;
	cin>>n>>k;
	ll a[n+1];
	For(i,1,n) cin>>a[i];
	bool check=false;
	For(i,1,n-k+1){
		if(a[i]==k && a[i+k-1]==1){
			check=true;
			for(j=i+1;j<=i+k-2;j++){
				if(a[j]!=k-j+i || j>n){
					check=false;
					break;
				}
			}
			if(check) ans++;
			i=j;
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
	    cout<<"Case #"<<i<<": ";
		solve();
	}

	return 0;
}