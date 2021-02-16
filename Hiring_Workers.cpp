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

void primeFactors(ll n, vector<ll>& v) {
    while (n%2 == 0) 
    { 
        v.pb(2);
        n = n/2; 
    }
    for (ll i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
           v.pb(i);
            n = n/i; 
        } 
    } 
    if (n > 2) 
        v.pb(n);
} 



ll gcd(ll x, ll y){
    if(y==0) return x;
    return gcd(y,x%y);
}

void findans(vector<ll>& v, vector<ll>& g, int gi, int n){
    
}




ll solve() {
	ll k,temp,m,sum=0,res=0,ans,n,x,a,b;
    cin>>k>>x;
    vector<ll> v;
    primeFactors(x,v);

    unordered_map<ll,ll> mp;
    FOR(i,0,v.size()){
        mp[v[i]]++;
    }
    
    
    v.clear();
    
    
    for(auto r:mp){
        v.push_back(pow(r.ff,r.ss));
    }
    sort(v.begin(),v.end());
    temp=v.size();
    FOR(i,0,temp){
        sum += v[i];
        //cout << v[i] << ' ';
    }
    //cout << endl;
    if(temp<=k) return sum+(k-temp);

    vector<ll> g(k,1);
    res = INF;
    findans(v,g,0,temp,res);
    return res;



    m=temp-k;
    FOR(i,0,m){
        sum = sum - (v[i]+v[2*m-1-i]) + v[i]*v[2*m-1-i];
        
    }
    return sum;
    


}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;


	For(i,1,t) {
		cout << solve() << endl;
	}

	return 0;
}