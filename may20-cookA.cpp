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
	ll k,cnt,temp,sum,res,ans,n;
	cin>>n;
	k=n;
	ans=0;
	res=1;
	bool check=false;
	while(k>0){
		if(k%2!=0 && k!=1) check=true;
		temp=(k+1)/2;
		ans+=res*temp;
		res*=2;
		k/=2;
	}
	if(!check){
		cout<<-1<<endl;
		return;
	}
	cout<<ans-1<<endl;

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