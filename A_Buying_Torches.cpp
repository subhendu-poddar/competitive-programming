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
ll ceiling(float x){
    ll ans=x;
    if(ans==x) return ans;
    return ans+1;
}
ll solve() {
	ll k,temp=5,sum,res,ans,n;
    ll x, y;
    cin >> x >> y >> k;
    if(x==2) return 2*k+k*y-1;
    sum=k+k*y;
    temp=sum%(x-1);
    if(temp==0 || temp==1){
        return k+sum/(x-1);
    }
    return k+1+sum/(x-1);
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