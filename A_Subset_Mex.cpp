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
ll solve() {
	ll k,temp=5,sum,res,ans,n;
    cin >> n;
    map<ll,ll> mp;
    FOR(i,0,n){
        cin >> temp;
        mp[temp]++;
    }
    k=0;
    ans=0;
    FOR(i,0,101){
        if(!mp[i]){
            if(k==0){
                return 2*i;
            }
            return ans+i;
        }
        if(mp[i]==1){
            if(k==0) {
                ans+=i;
                k=1;
            }
        }
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
		cout << solve() << endl;
	}

	return 0;
}