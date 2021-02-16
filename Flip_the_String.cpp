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
vector<ll> val(2000001,0);

ll solve() {
	ll k,temp=-1,sum=1,count=0,res=0,ans,n;
    string a,b;

    cin>>a;
    cin>>b;
    n=a.size();
    if(a==b) return 0;

    vector<ll> dp(n,1);

    FOR(i,0,a.size()){
        if(a[i]!=b[i]){
            dp[i] = 0;
        }
    }
    FOR(i,0,a.size()){
        if(i==0 && dp[i]==0) res++;
        else if(i==1 && dp[i]==0) res++;
        else if(dp[i]==0){
            if(dp[i-2]==1) res++;
        }
    }
    return res;







}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		cout << solve() << endl;
	}

	return 0;
}