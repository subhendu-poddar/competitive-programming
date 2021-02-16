#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//


void solve() {
	ll k,temp=0,sum,res=0,n,sp=0,sn=0;
    cin >> n;
    vector<ll> a(n), pos, neg, ans;
    FOR(i,0,n) {
        cin >> a[i];
        temp+=a[i];
        if(a[i]>=0) pos.pb(a[i]);
        else neg.pb(a[i]);
    }
    if(temp==0) {
        cout << "NO" << endl;
        return;
    }
    temp=0;
    FOR(i,0,n){
        if(temp+pos[sp]==0){
            ans.pb(neg[sn]);
            temp+=neg[sn];
            sn++;
        }
        else{
            if(sp<pos.size()){
            ans.pb(pos[sp]);
            sp++;
            }
        }
    }
    cout <<"YES"<<endl;
    FOR(i,0,n){
        cout << ans[i] << ' ';
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