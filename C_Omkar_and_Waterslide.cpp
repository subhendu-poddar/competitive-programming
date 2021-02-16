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
    cin >> n;
    vector<ll> v(n);
    FOR(i,0,n){
        cin >> v[i];
    }
    ans=0;
    for(ll i=n-1;i>0;i--){
        if(v[i]<v[i-1]){
            ans+=v[i-1]-v[i];
        }
    }
    return ans;



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