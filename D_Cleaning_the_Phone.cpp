#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr(x) fixed<<setprecision(10)<<x
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n,a) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define INF 1000000000000
#define max_heap priority_queue<ll>
#define min_heap priority_queue<ll,vv<ll>,greater<ll>>
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//

ll solve() {
	ll k,temp=0,sum,res,ans,n,m;
    cin >> n >> m;
    vv<ll> a(n), b(n);
    FOR(i,0,n){
        cin >> a[i];
        temp+=a[i];
    }
    FOR(i,0,n){
        cin >> b[i];
    }
    if(temp<m) return -1;
    vv<ll> v1,v2;
    FOR(i,0,n){
        if(b[i]==1){
            v1.pb(a[i]);
        }
        else{
            v2.pb(a[i]);
        }
    }
    sort(v1.begin(),v1.end(),greater<ll>());
    sort(v2.begin(),v2.end(),greater<ll>());
    sum=0;
    ans=0;
    ll ptr1=0, ptr2=0;
    while(sum<m){
        if(ptr1==v1.size()-1){
            sum+=v1[ptr1++];
            ans++;
            continue;
        }
        if(ptr2==v2.size() || ptr1!=v1.size() || (ptr1<v1.size() && v1[ptr1]+v1[ptr1+1]>=v2[ptr2])){
            sum+=v1[ptr1++];
            ans++;
        }
        else{
            sum+=v2[ptr2++];
            ans+=2;
        }
    }
    if(ptr1!=0 && v1.size()>0 && sum-m>=v1[ptr1-1]){
        ans--;
    }
    

    return ans;
}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		//solve();
		cout << solve() << endl;
	}

	return 0;
}