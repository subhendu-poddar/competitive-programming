#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
#define hashmap unordered_map<char,node*>

//-------------------------------------------------//
void solve() {
	ll k,temp=5,sum,res,ans,n;
    cin >> n;
    vector<ll> a(n), b(n);
    FOR(i,0,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    temp=0;
    for(ll i=1;i<n;i+=2){
        b[i]=a[temp++];
    }
    for(ll i=0;i<n;i+=2){
        b[i]=a[temp++];
    }
    ans=0;
    FOR(i,1,n-1){
        if(b[i]<b[i-1] && b[i]<b[i+1]){
            ans++;
        }
    }
    cout << ans << endl;
    FOR(i,0,n) cout << b[i] << ' ';
    cout << endl;





}


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t;
	t=1;
	//cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}