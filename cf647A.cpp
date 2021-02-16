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
ll findlog(ll res, ll base){
	if(res==1) return 0;
	return 1+findlog(res/base,base);
}
bool check(ll a, ll b){
	while(a!=b){
		if(a%2!=0){
			return false;
		}
		a/=2;
	}
	return true;
}
void solve() {
	ll k,cnt,temp,sum,res,ans,n;
	ll a,b;
	cin>>a>>b;
	if(a<b) swap(a,b);
	if(a%b!=0 || !check(a,b)){
		cout<<-1<<endl;
		return;
	}
	cnt=findlog(a/b,2);
	ans=cnt/3;
	cnt%=3;
	if(cnt>0) ans++;
	cout<<ans<<endl;
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