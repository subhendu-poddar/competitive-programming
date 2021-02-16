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
ll gcd(ll x, ll y){
    if(x==0) return y;
    return gcd(y%x,x);
}
void solve() {
	ll k,temp=0,sum,n,gcdv;
    cin >> n;
    vector<ll> v(n), check(n,false),ans;
    FOR(i,0,n) cin >> v[i];

    FOR(i,0,n){
        if(temp<v[i]){
            temp=v[i];
            k=i;
        }
    }
    gcdv=temp;
    ans.pb(v[k]);
    check[k]=true;

    FOR(i,0,n){
        temp=0;
        k=-1;
        FOR(j,0,n){
            if(!check[j] && gcd(gcdv,v[j])>temp){
                k=j;
                temp=gcd(gcdv,v[j]);
            }
        }
        if(k!=-1){
            check[k]=true;
            gcdv=temp;
            ans.pb(v[k]);
        }
    }
    FOR(i,0,n) cout << ans[i] << ' ';
    cout << endl;
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