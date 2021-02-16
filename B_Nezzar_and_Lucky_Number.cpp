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

void solve() {
	ll k,temp,sum,res,ans,n,q,d,count;
    cin >> q >> d;
    FOR(i,0,q){
        cin >> n;
        bool flag=false;
        if(n%d==0 || n>=d*10){
            cout<<"YES"<<endl;
            continue;
        }
        n-=d;
        count=1;
        while(n>=0 && count<10){
            if(n%10==0){
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
            count++;
            n-=d;
        }
        if(flag) continue;

        cout<<"NO"<<endl;
    }
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