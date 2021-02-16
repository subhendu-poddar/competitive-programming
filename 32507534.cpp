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
void solve() {
	ll k,temp,sum,res,ans,n,j;
	cin>>n;
	ll arr[n];
	FOR(i,0,n) cin>>arr[i];
	ll m1=INF, m2=0;
	sort(arr,arr+n);
	FOR(i,0,n){
		temp=1;
		j=i-1;
		while(j>=0 && abs(arr[j+1]-arr[j])<=2) temp++,j--;
		j=i+1;
		while(j<n && abs(arr[j]-arr[j-1])<=2) temp++,j++;
		m1=min(m1,temp);
		m2=max(m2,temp);
	}
	cout<<m1<<' '<<m2<<endl;
	

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