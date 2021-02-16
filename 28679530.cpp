#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

ll check(ll **arr, ll r, ll c, ll n, ll m) {
    ll dx=0;
    while(1) {
        if(r-dx<0 || r+dx>n || c-dx<0 || c+dx>m) {
            break;
        }
        if(arr[r][c+dx]==arr[r][c-dx] && arr[r+dx][c]==arr[r-dx][c]) {
            dx++;
        }
        else {
            break;
        }
    }
    //cout << dx << endl;
    return dx;
}

void solve() {
    ll n,m,i,j,l,r,q,count;
    cin >> n >> m;
    ll** arr=new ll* [n];
    for(i=0;i<n;i++) {
        arr[i]=new ll [m];
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }
    ll ans=0;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            ans+=check(arr,i,j,n-1,m-1);
        }
    }
    cout << ans << endl;
    
    
    
    
    
}
int main()
{
	IOS;
	ll t;
	cin >> t;
	//t=1;
	while(t--) {
		solve();
	}

	return 0;
}