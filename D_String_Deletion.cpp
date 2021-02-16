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
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//


ll solve() {
	ll k,temp,sum,res,ans,n;
    cin>>n;
    string s;
    cin>>s;
    vv<ll> dp;
    
    FOR(i,0,n-1){
        if(s[i]!=s[i+1]){
            dp.pb(i);
        }
    }
    if(dp.size()==1 || dp.size()==0) return 1;
    temp=n-1;
    k=0;
    sum=0;
    while(1){
        sum++;
        if(dp[k+1]>=temp) return sum;
        temp--;
        k++;
    }
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