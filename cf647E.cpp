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
ll findMin(ll arr[], ll n) 
{ 
    // Calculate sum of all elements 
    ll sum = 0;  
    for (ll i = 0; i < n; i++) 
        sum += arr[i]; 
  
    // Create an array to store results of subproblems 
    bool dp[n+1][sum+1]; 
  
    // Initialize first column as true. 0 sum is possible  
    // with all elements. 
    for (ll i = 0; i <= n; i++) 
        dp[i][0] = true; 
  
    // Initialize top row, except dp[0][0], as false. With 
    // 0 elements, no other sum except 0 is possible 
    for (ll i = 1; i <= sum; i++) 
        dp[0][i] = false; 
  
    // Fill the partition table in bottom up manner 
    for (ll i=1; i<=n; i++) 
    { 
        for (ll j=1; j<=sum; j++) 
        { 
            // If i'th element is excluded 
            dp[i][j] = dp[i-1][j]; 
  
            // If i'th element is included 
            if (arr[i-1] <= j) 
                dp[i][j] |= dp[i-1][j-arr[i-1]]; 
        } 
    } 
   
    // Initialize difference of two sums.  
    ll diff = INF;
      
    // Find the largest j such that dp[n][j] 
    // is true where j loops from sum/2 t0 0 
    for (ll j=sum/2; j>=0; j--) 
    { 
        // Find the  
        if (dp[n][j] == true) 
        { 
            diff = sum-2*j; 
            break; 
        } 
    } 
    return diff; 
}

ll power (ll base,ll exponent)
{
    ll ans=1;
    while(exponent!=0)
    {
      if(exponent&1) ans=(1LL*ans*base)%mod;
      base=(1LL*base*base)%mod;
      exponent>>=1;
    }
    return ans;
}

void solve() {
	ll k,cnt,p,temp,sum=0,res,ans=INF,n;
	cin>>n>>p;
	ll a[n];
	FOR(i,0,n) cin>>a[i];
	FOR(i,0,n){
		a[i]=power(p,a[i]);
	}
	cout<<findMin(a,n)<<endl;
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