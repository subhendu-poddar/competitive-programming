#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//
void finddivisors(ll n, map<ll,ll> &mp){
	if(n==1) return;
	if(n%2==0){
		mp[2]++;
		finddivisors(n/2,mp);
	}
	else{
		ll c=0;
		for(ll i=3;i<=sqrt(n);i+=2){
			if(n%i==0){
				c=1;
				mp[i]++;
				finddivisors(n/i,mp);
				break;
			}
		}
		if(c==0){
			mp[n]++;
			return;
		}
	}
}
void addedge(vector<ll> edge[], ll x, ll y){
	edge[x].push_back(y);
	edge[y].push_back(x);
}
void get(map<ll,ll> &m1, map<ll,ll> &m2){
	for(auto i:m2){
		if(!m1[i.first]){
			m1[i.first]=i.second;
		}
		else{
			m1[i.first]+=i.second;
		}
	}
}
void BFS(vector<ll> edge[], ll x, ll n, map<ll,ll> mp[], map<ll,ll> **m){
	ll i,k;
	ll count=0;
	bool vis[n+1]={false};
	queue<ll> q;
	q.push(x);
	get(m[x][x],mp[x]);
	vis[x]=true;
	count++;
	while(!q.empty()){
		auto z=q.front();
		q.pop();
		if(!vis[z]){
			vis[z]=true;
			count++;
		}
		if(count>=n){
			return;
		}
		FOR(i,0,edge[z].size()){
			k=edge[z][i];
			if(!vis[k]){
				q.push(k);
				get(m[x][k],m[x][z]);
				get(m[x][k],mp[k]);
			}
		}
	}

}
void solve() {
	ll i,j,k,x,y,temp,sum,res,ans=1,n,q;
	cin>>n;
	vector<ll> edge[n+1];
	map<ll,ll> mp[n+1];
	FOR(i,1,n){
		cin>>x>>y;
		addedge(edge,x,y);
	}
	FOR(i,0,n){
		cin>>k;
		finddivisors(k,mp[i+1]);
	}
	map<ll,ll> **m=new map<ll,ll>* [n+1];
	for(i=0;i<=n;i++){
		m[i]=new map<ll,ll> [n+1];
	}
	for(i=1;i<=n;i++) {
		BFS(edge,i,n,mp,m);
	}
	cin>>q;
	FOR(i,0,q){
		cin>>x>>y;
		if(x>y){
			temp=x;
			x=y;
			y=temp;
		}
		ans=1;
		for(auto i:m[x][y]){
			ans*=(i.second+1);
			ans=ans%mod;
		}
		cout<<ans<<endl;
	}




	

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