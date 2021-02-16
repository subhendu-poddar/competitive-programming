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
	ll k,temp,sum=0,res,ans=0,n;
    ll d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    while(1){
        ans++;
        if(ans<d1 && ans<d2) continue;
        if(ans>=d1 && ans>=d2){
            sum+=(v1+v2);
        }
        else if(ans>=d1){
            sum+=v1;
        }
        else if(ans>=d2){
            sum+=v2;
        }
        if(sum>=p) return ans;
    }
}


int main()
{
	IOS;
	ll t;
	t=1;
	//cin >> t;
	For(i,1,t) {
		cout << solve() << endl;
	}

	return 0;
}