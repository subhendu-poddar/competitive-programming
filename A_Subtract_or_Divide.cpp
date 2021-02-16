#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//


ll solve() {
	ll k,temp,sum,res,ans,n;
    cin>>n;
    if(n==1) return 0;
    if(n==2) return 1;
    if(n==3) return 2;
    if(n%2==0) return 2;
    return 3;

}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		cout<<solve()<<endl;
	}

	return 0;
}