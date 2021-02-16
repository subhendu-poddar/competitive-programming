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
#define max_heap(type) priority_queue<type>
#define min_heap(type) priority_queue<type,vv<type>,greater<type>>
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//

const ll N=1000000;
ll factorialNumInverse[N + 1]; 
ll naturalNumInverse[N + 1]; 
ll fact[N + 1]; 
ll power[N + 1];

void InverseofNumber() {
    naturalNumInverse[0] = naturalNumInverse[1] = 1;
    for (int i = 2; i <= N; i++) 
        naturalNumInverse[i] = naturalNumInverse[mod % i] * (mod - mod / i) % mod;
}
void InverseofFactorial(){
    factorialNumInverse[0] = factorialNumInverse[1] = 1; 
    for (int i = 2; i <= N; i++) 
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % mod; 
}
void factorial() {
    fact[0] = 1; 
    for (int i = 1; i <= N; i++) { 
        fact[i] = (fact[i - 1] * i) % mod; 
    }
}
void Power(){
	power[0]=1;
	For(i,1,N){
		power[i] = (power[i-1]*2)%mod;
	}
}
ll comb(ll x, ll y){
    return (((fact[x]*factorialNumInverse[y])%mod)*factorialNumInverse[x-y])%mod;
}


ll solve() {
	ll k,temp,sum,res,ans,n,m,x,y,minv=INT_MAX, maxv=INT_MIN;
    cin>>n>>m>>k;
    ll st=0, end=n-1;
    vv<ll> a(n);
    FOR(i,0,n){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    queue<pair<ll,ll>> q;
    q.push({st,end});
    ans=0;
    FOR(i,0,n-m){
        if(a[n-1]-a[i]<=k){
            ans+=
        }
    }
    return ans;
    
}


int main()
{
	IOS;
	ll t;
    InverseofNumber();
	InverseofFactorial();
	factorial();
	//t=1;
	cin >> t;
	For(i,1,t) {
		//solve();
		cout << solve() << endl;
	}

	return 0;
}