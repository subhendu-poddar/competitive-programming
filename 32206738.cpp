#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//

void solve() {
	ll k,temp=0,sum=0,res,ans,n,x,y;
	cin>>n>>k;
	while(k--){
		cin>>x>>y;
		sum+=abs(x-temp);
		sum+=abs(y-x);
		temp=y;
	}
	cout<<sum<<endl;


	

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