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
void solve() {
	ll k,cnt,temp,sum,res,ans,n;
    cin >> n >> k;
    ll arr[n];
    FOR(i,0,n){
        cin >> arr[i];
    }
    ll minv=INF, maxv=-INF;
    FOR(i,0,n){
        maxv=max(maxv,arr[i]);
        minv=min(minv,arr[i]);
    }
    if(k%2==1){    
        FOR(i,0,n){
            cout << maxv-arr[i] << ' ';
        }
    }
    else{    
        FOR(i,0,n){
            cout << arr[i]-minv << ' ';
        }
    }
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