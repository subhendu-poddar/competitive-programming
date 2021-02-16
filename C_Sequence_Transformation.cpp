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


ll solve() {
	ll k,temp,sum,res=0,ans=INF,n;
    cin>>n;
    vector<ll> a(n);
    FOR(i,0,n) cin>>a[i];
    unordered_map<ll,vector<ll>> v;
    FOR(i,0,n){
        v[a[i]].pb(i+1);
    }
    for(auto m:v) {
        vector<ll> arr=m.second;
        res=1;
        sum=0;
        temp=arr.size();
        FOR(i,0,temp){
            k=arr[i];
            if((k==1 || k==n) || (i>0 && arr[i]==arr[i-1]+1)){
                sum++;
                continue;
            }
            res++;
        }
        if(sum==n) return 0;
        if(arr[temp-1]==n && temp>1 && arr[temp-1]==arr[temp-2]+1) res--;
        ans=min(ans,res);
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
		cout << solve() << endl;
	}

	return 0;
}