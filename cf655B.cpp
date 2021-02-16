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
ll findgcd(ll a, ll b){
	if(a==0) return b;
	return findgcd(b%a,a);
}

void solve() {
	ll k,cnt,temp,sum,res,ans,n;
	cin >> n;
	if(n%2==0){
		cout << n/2 << ' ' << n/2 << endl;
		return;
	}
	bool check=false;
	for(ll i=3;i<=sqrt(n);i+=2){
		if(n%i==0){
			check=true;
			cout << n/i << ' ' << n-n/i << endl;
			return;
		}
	}
	if(!check){
		cout << 1 << ' ' << n-1 << endl;
	}
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