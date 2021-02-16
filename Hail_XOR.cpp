#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define ff first
#define ss second
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n,a) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define INF 1000000000000
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//


void solve() {
	ll k,temp,sum,res,ans,n,x,high=32;
    cin >> n >> x;
    sum=x;
    vector<ll> a(n), v(n);
    FOR(i,0,n){
        cin >> a[i];
        v[i] = a[i];
    }
    vector<ll> bitcount(high,0);
    vector<ll> count(high,0);
    FOR(i,0,n-1){
        for(int bit=high-1;bit>=0;bit--){
            if(a[i]&(1<<bit)){
                if(bitcount[bit]>0){
                    a[i]^=(1<<bit);
                    bitcount[bit]--;
                    count[bit]++;
                }
                else if(x>0){
                    a[i]^=(1<<bit);
                    count[bit]++;
                    bitcount[bit]++;
                    x-=1;
                }
            }
        }
    }

    FOR(i,0,high){
        if(bitcount[i]%2==1){
            a[n-1]^=(1<<i);
        }
    }

    bool flag=false;
    FOR(i,0,n){
        if(count[i]>=2 && n>2){
            flag=true;
            break;
        }
    }

    if(x%2==1 && !flag){
        a[n-1]^=1;
        a[n-2]^=1;
    }


    FOR(i,0,n) cout << a[i] << ' ';
    cout << endl;
    
}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
		//cout << solve() << endl;
	}

	return 0;
}