#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

void solve() {
    ll n,i,j,l,r,q;
    cin >> n >> q;
    ll arr[n];
    for(i=0;i<n;i++) {
        cin >> arr[i];
    }
    ll val1[n], val2[n];
    memset(val1,0,sizeof(val1));
    memset(val2,0,sizeof(val2));
    if(arr[0]<arr[1]) {
        val1[0]=1;
    }
    else {
        val2[0]=1;
    }
    for(i=1;i<n-1;i++) {
        if(arr[i]<arr[i-1] && arr[i]<arr[i+1]) {
            val1[i]=1;
        }
        else if(arr[i]>arr[i+1] && arr[i]>arr[i-1]) {
            val2[i]=1;
        }
    }
    ll sum1[n], sum2[n];
    sum1[0]=val1[0];
    sum2[0]=val2[0];
    for(i=1;i<n;i++) {
        sum1[i]=sum1[i-1]+val1[i];
        sum2[i]=sum2[i-1]+val2[i];
    }
    ll ans1,ans2;
    while(q--) {
        cin >> l >> r;
        ans1=sum1[r-1]-sum1[l-1];
        ans2=sum2[r-1]-sum2[l-1];
        if(val1[l-1]==1) {
            ans1++;
        }
        else if(val2[l-1]==1) {
            ans2++;
        }
        if(val1[r-1]==1) {
            ans1-=1;
        }
        else if(val2[r-1]==1) {
            ans2-=1;
        }
        if(val1[l-1]==0 && val2[l-1]==0) {
            if(arr[l]>arr[l-1]) {
                ans1++;
            }
            else {
                ans2++;
            }
        }
        //cout << ans1 << ' ' << ans2 << endl;
        if(ans1==ans2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
int main()
{
	IOS;
	ll t;
	//cin >> t;
	t=1;
	while(t--) {
		solve();
	}

	return 0;
}