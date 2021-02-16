#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
#define hashmap unordered_map<char,node*>

//-------------------------------------------------//
ll solve() {
	ll k=0,temp=5,sum=0,res,ans,n,x;
    cin >> n >> x;
    vector<ll> a(n);
    FOR(i,0,n) {
        cin >> a[i];
        a[i]-=x;
        if(a[i]!=0) k=1;
        sum+=a[i];
    }
    if(k==0) return 0;
    if(sum==0) return 1;
    if(sum%2==0) return 2;
    return 3;
    
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