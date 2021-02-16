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

void selfloop(ll x, ll size, ll k, ll pt, vv<bool>& vis, vv<vv<ll>>& gp){
    FOR(i,1,vis.size()){
        if(i==x) continue;
        if(gp[x][i]==pt &&)
    }
}


void solve() {
	ll k,temp,sum,res,ans,n;
    cin>>n>>k;
    vv<vv<ll>> gp(n+1,vv<ll>(n+1,-1));
    string s;
    For(i,1,n){
        cin>>s;
        FOR(j,0,n){
            if(s[j]=='a'){
                gp[i][j+1]=1;
            }
            else{
                gp[i][j+1]=0;
            }
        }
    }
    if(k%2==1){
        cout <<"YES" << endl;
        for(ll i=0;i<k;i+=2){
            cout<<1<<' '<<2<<' ';
        }
        cout<<endl;
        return;
    }
    For(i,1,n){
        For(j,1,n){
            if(i==j) continue;
            if(gp[i][j]==gp[j][i]){
                cout <<"YES" << endl;
                while(k>1){
                    cout<<i<<' '<<j<<' ';
                    k-=2;
                }
                cout<<i<<endl;
                return;
            }
        }
    }
    vv<bool> vis0(n+1,0), vis1(n+1,1);
    For(i,1,n){
        selfloop(i,0,0,vis0,k,gp);
    }

    cout<<"NO"<<endl;
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