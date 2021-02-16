#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)

//-------------------------------------------------//
void solve() {
	ll k,temp,sum,res,ans=0,n,l,r;
	cin>>n;

	vector<vector<ll>> cnt(201, vector<ll> (n+1));
	vector<vector<ll>> pos(201, vector<ll> (n+1));

	ll arr[n];
	FOR(i,0,n){
		cin>>arr[i];
		cnt[arr[i]][i]++;
	}
	FOR(j,0,n){
		For(i,1,200){
			if(j!=0) cnt[i][j]+=cnt[i][j-1];
		}
		pos[arr[j]][cnt[arr[j]][j]]=j;
	}
	For(i,1,200){
		ans=max(ans,cnt[i][n-1]);
	}
	FOR(i,0,n){
		k=cnt[arr[i]][n-1];
		temp=cnt[arr[i]][i];
		if(temp<=k/2){
			l=pos[arr[i]][temp];
			r=pos[arr[i]][k+1-temp];
			For(j,1,200){
				if(i==j) continue;
				ans=max(ans,cnt[j][r-1]-cnt[j][l]+2*temp);
			}
		}
	}
	cout<<ans<<endl;





}


int main()
{
	freopen("input.txt", "r", stdin);
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
