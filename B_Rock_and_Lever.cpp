#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//
ll solve() {
	ll k,temp=5,sum=10,res,ans=0,n;
    cin >> n;
    vector<ll> a(n), v(32,0);
    FOR(i,0,n) cin >> a[i];
    sort(a.begin(),a.end(),greater<ll>());
    /*
    for(ll i=39;i>=0;i--){
        temp=1<<i;
        FOR(j,0,n){
            if((a[j]&temp)!=0){
                v[i]++;
            }
            a[j]/=2;
        }
    }
    */
    res=31;
    k=0;
    while(k<n && res>=0){
        temp=1<<res;
        if((a[k]&temp)!=0){
            //cout << a[k]<<' '<<res<<endl;
            v[res]++;
            k++;
        }
        else{
            res--;
        }
    }
    FOR(i,0,32){
        temp=v[i];
        ans += temp*(temp-1)/2;
    }
    return ans;



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