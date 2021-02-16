#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//

void solve() {
	ll i,j,temp,sum,res,ans,n;
	cin>>n;
	ll arr[n];
	FOR(i,0,n){
		cin>>arr[i];
	}
	ans=n*(n+1)/2;
	vector<pair<ll,bool> > v;
	FOR(i,0,n){
		if((arr[i]%4)==0){
			v.push_back({i,false});
		}
		else if((arr[i]%2)==0){
			v.push_back({i,true});
		}
	}
	if(v.size()==1 && v[0].second){
		ans-=(v[0].first+1)*(n-v[0].first);
	}
	else if(v.size()>1){
		FOR(i,1,v.size()-1){
			if(v[i].second){
				ans-=(v[i].first-v[i-1].first)*(v[i+1].first-v[i].first);
			}
		}
		if(v[0].second){
			ans-=(v[0].first+1)*(v[1].first-v[0].first);
		}
		if(v[v.size()-1].second){
			ans-=(n-v[v.size()-1].first)*(v[v.size()-1].first-v[v.size()-2].first);
		}
	}


	
	cout<<ans<<endl;


	

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