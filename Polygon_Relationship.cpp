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
ll find(ll n) {
    if(n<3){
        return 0;
    }
    return n+find(n/2);
}
void solve() {
	ll k,cnt,temp,sum,a,b,res,ans,n;
    cin >> n;
    FOR(i,0,n){
        cin >> a >> b;
    }
    cout << find(n) << endl;

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