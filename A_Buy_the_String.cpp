#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//


void solve() {
	ll k,temp,sum,res,ans,n,c0,c1,h;
    cin >> n >> c0 >> c1 >> h;
    string s;
    cin >> s;
    ll cnt0=0, cnt1=0;
    FOR(i,0,s.size()){
        if(s[i]==48){
            cnt0++;
        }
        else{
            cnt1++;
        }
    }
    if((max(c0,c1)-min(c0,c1))>h){
        if(c0>c1){
            ans = h*cnt0 + c1*(cnt0+cnt1);
        }
        else{
            ans = h*cnt1 + c0*(cnt0+cnt1);
        }
    }
    else{
        ans = c0*cnt0 + c1*cnt1;
    }
    cout << ans << endl;








}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}