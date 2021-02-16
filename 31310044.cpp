#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//
ll check(ll x){
	for(ll i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return 1+check(x/i);
		}
	}
	return 0;
}

ll solve() {
	ll i,j,x,k,temp,sum,res,ans,n;
	cin>>x>>k;
	ans=check(x)+1;
	if(ans>=k){
		cout<<"1"<<endl;
	}
	else{
		cout<<"0"<<endl;
	}


	

}

//-------------------------------------------------//

int main()
{
	IOS;
	ll t,i;
	//t=1;
	cin >> t;
	FOR(i,0,t) {
		solve();
	}

	return 0;
}