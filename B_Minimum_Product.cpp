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
ll solve() {
	ll k,cnt,temp,sum,res,ans,n;
    ll a, b, x, y;
    cin >> a >> b >> x >> y >> n;

    ll a1=a,a2=a,b1=b,b2=b,n1=n,n2=n;

    ll temp1 = a-x, temp2=b-y;

    if(temp1+temp2<=n){
        return x*y;
    }


        a1 = a1-min(temp1,n1);
        n1 -= min(temp1,n1);
        if(n1>0){
            b1-=min(temp2,n1);
        }
    
    
        b2= b2-min(temp2,n2);
        n2 -= min(temp2,n2);
        if(n2>0){
            a2-=min(temp1,n2);
        }
    
    return min(a1*b1, a2*b2);
    
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