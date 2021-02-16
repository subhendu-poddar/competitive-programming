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
ll check(vv<vv<ll>> &a, ll x, ll y){
    if(a[x][y]==0) return 0;
    if(a[x][y+1]==0) return 0;
    if(a[x][y-1]==0) return 0;
    return min(a[x][y],min(a[x][y+1],a[x][y-1]));

}

ll solve() {
	ll k,temp,sum,res,ans,n,m;
    cin >> n >> m;
    vv<vv<ll>> fro(n,vv<ll>(m,0)), end(n,vv<ll>(m,0)), s(n,vv<ll>(m,0));
    char ch;

    FOR(i,0,n){
        FOR(j,0,m){
            cin >> ch;
            if(ch=='*') s[i][j]=1;
        }
    }

    

    FOR(i,0,n){
        FOR(j,0,m){
            //cout << "hello" << endl;
            if(s[i][j]==1){
                end[i][j]=1;
            }
            else{
                continue;
            }
            if(i==0 || j==0 || j==m-1) continue;
            if(check(end,i-1,j)){
                end[i][j]=check(end,i-1,j)+1;
            }
        }
    }
    rev(i,n-1,0){
        rev(j,m-1,0){
            if(s[i][j]==1){
                fro[i][j]=1;
            }
            else{
                continue;
            }
            if(i==n-1 || j==0 || j==m-1) continue;
            if(check(fro,i+1,j)){
                fro[i][j]=check(fro,i+1,j)+1;
            }
        }
    }
    ans=0;
    FOR(i,0,n){
        FOR(j,0,m){
            ans+=fro[i][j];
            /*
            if(end[i][j]>0){
                ans+=end[i][j]-1;
            }
            */
        }
    }
    /*
    FOR(i,0,n){
        FOR(j,0,m)  cout << end[i][j] << ' ';
        cout << endl;
    }
    cout << endl;

    FOR(i,0,n){
        FOR(j,0,m)  cout << fro[i][j] << ' ';
        cout << endl;
    }
    cout << endl << endl;
    */
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