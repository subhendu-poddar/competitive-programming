#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//

ll solve() {
	ll k,temp=5,sum=10,x,y,res,ans=0,n,q;
    cin >> n >> q;
	vector<ll> a(n);
    FOR(i,0,n) cin >> a[i];
    while(q--){
        cin >> x >> y;
    }
	vector<ll> d1(n+1), d2(n+1);
	d1[0]=-INF;
	d2[0]=0;
	For(i,1,n){
		d1[i]=max(d1[i-1],d2[i-1]+a[i-1]);
		d2[i]=max(d2[i-1],d1[i-1]-a[i-1]);
		//cout << d1[i] << ' '<<d2[i]<<endl;
	}
	return max(d1[n],d2[n]);
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
		cout << solve() << endl;
	}

	return 0;
}