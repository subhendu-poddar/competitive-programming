#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
ll store[817];
//-------------------------------------------------//
ll find(ll n) {
	ll k,cnt,temp,sum,res,ans,l,r;
    ll a[n+1];
    a[0]=0;
    For(i,1,n) a[i]=a[i-1]+i;
    ans=0;
    For(i,1,n){
        l=a[i];
        r=a[n]-a[i];
        if(r==l){
            ans++;
            continue;
        }
        if(r>l && (r-l)%2==0 && (r-l)/2<n) ans+= min(min(i,n-i),min(n-(r-l)/2,(r-l)/2));
    }
    return ans;
}

ll solve() {
	ll k,cnt,temp,val=816,res,d,ans=0,n;
    cin >> n;
    k = (n+1)/2;
    if(k%2!=0){
        return 0;
    }
    if(n<=816){
        return store[n];
    }
    res = n-816;
    ans += 240;
    temp = ((res-1)%val)+1;
    cnt = (res-temp)/val;

    ans += cnt*239;
    if(store[temp]!=0) {
        ans+= store[temp]-1;
    }
    return ans;



}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
    store[0]=0;
    For(i,1,816) {
        store[i] = find(i);
    }
	ll t;
	//t=200;
	cin >> t;
	For(i,1,t) {
		cout << solve() << endl;
	}

	return 0;
}