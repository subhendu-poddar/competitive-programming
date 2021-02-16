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
	ll k,temp=5,sum,res,ans=0,n;
    cin >> n;
    vector<int> a(n+1);
    For(i,1,n){
        cin >> a[i];
    }
    int now=1;
    ans=0;
    for(int i=1;i<=n;++i){
        if(now){
            if(a[i]) ++ans;
            ++i;
            if(!a[i]) ++i;
        }
        else{
            if(a[i]==1) ++i;
            if(a[i]) ++i;
        }
        now^=1;
        --i;
    }
    cout << ans << endl;



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