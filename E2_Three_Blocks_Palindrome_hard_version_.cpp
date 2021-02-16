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
vector<ll> a(200005,0), cnt(201,0);
vector<vector<ll>> pre(200005,vector<ll> (201,0)), suf(200005,vector<ll> (201,0));

void solve() {
	ll k,temp,sum,res,ans=0,n;
    cin >> n;
    FOR(i,0,n+3){
        a[i]=0;
        FOR(j,0,201){
            cnt[j]=0;
            pre[i][j]=0;
            suf[i][j]=0;
        }
    }
    
    For(i,1,n){
        cin>>k;
        a[i]=k;
        pre[i][k]=1;
        For(j,1,200){
            pre[i][j] += pre[i-1][j];
        }
    }

    for(ll i=n;i>=1;i--){
        k = a[i];
        cnt[k]++;
        suf[k][cnt[k]] = i;
    }


    For(i,1,n){
        k = a[i];
        temp = pre[i][k];
        if(cnt[k]<temp) continue;
        ll r = suf[k][temp];
        if(r<=i) continue;
        if(r==(i+1)) ans = max(2*temp,ans);
        For(j,1,200){
            ans = max(ans, 2*temp+pre[r-1][j]-pre[i][j]);
        }
    }
    if(ans==0) ans=1;
    cout<<ans<<endl;

    a.clear();
    cnt.clear();
    pre.clear();
    suf.clear();
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