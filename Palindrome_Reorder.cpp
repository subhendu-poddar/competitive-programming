#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr pair<ll,ll>
#define setpr(x) fixed<<setprecision(10)<<x
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

string solve() {
	ll k,temp=0,sum,res,ans,n;
    string s;
    cin>>s;
    vv<ll> count(26,0);
    FOR(i,0,s.size()){
        count[s[i]-65]++;
    }
    string r1, r2;
    char ch,save;
    FOR(i,0,26){
        if(count[i]==1){
            save=i+65;;
            temp++;
        }
        else{
            if(count[i]%2!=0){
                temp++;
                save=i+65;
            }
            while(count[i]>=2){
                ch=i+65;
                r1=r1+ch;
                r2=ch+r2;
                count[i]-=2;
            }
        }
        if(temp>1) return "NO SOLUTION";
    }

    return (string)(r1+save+r2);
}


int main()
{
	IOS;
	ll t;
	t=1;
	//cin >> t;
	For(i,1,t) {
		//solve();
		cout << solve() << endl;
	}

	return 0;
}