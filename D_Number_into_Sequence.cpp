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


void solve() {
	ll k,temp,sum,res,ans,n;
    cin>>n;
    ans=n;
    unordered_map<ll,ll> mp;
    temp = sqrt(n);
    For(i,2,temp){
        sum=0;
        while(n%i==0){
            n/=i;
            sum++;
        }
        if(sum>0) mp[i]=sum;
    }
    if(n>1) mp[n]++;
    temp=0;
    for(auto x:mp){
        if(x.second>temp){
            temp = x.ss;
            k=x.ff;
        }       
    }
    cout<<temp<<endl;
    if(temp==1){
        cout<<ans<<endl;
        return;
    }
    sum=1;
    FOR(i,1,temp){
        cout<<k<<' ';
        sum*=k;
    }
    cout<<ans/sum<<endl;

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