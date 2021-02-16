#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define For(i,a,n) for(i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//

ll minvalue(ll** arr, ll n, ll k, ll ans[]){
	ll i,j,res=INF,temp;
	For(i,1,k){
		temp=0;
		For(j,1,n){
			if(arr[i][j]==ans[j]){
				temp++;
			}
		}
		res=min(res,temp);
	}
	return res;
}

void solve() {
	ll i,j,k,temp,sum,res,ans,n,m,x;
	cin>>n>>m>>k;
    map<ll,ll> mp[n+1];
	ll arr[k+1][n+1];
	For(j,1,n){
		For(i,1,k){
			cin>>x;
			arr[i][j]=x;
			mp[j][x]++;
		}
	}
	vector<ll> v;
	For(i,1,n){
		ans=0;
		For(j,1,m){
			if(mp[i][j] && ans<mp[i][j]){
				ans=mp[i][j];
				res=j;
			}
		}
		v.push_back(res);
	}
	For(i,0,n-1){
		cout<<v[i]<<' ';
	}
	cout<<endl;

	

}

//-------------------------------------------------//

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t,i;
	//t=1;
	cin >> t;
	FOR(i,0,t) {
		solve();
	}

	return 0;
}