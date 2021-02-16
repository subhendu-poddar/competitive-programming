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
vv<vv<int>> a(25,vv<int>(25)), res(26,vv<int>(26,-1)), vis(26,vv<int>(26,0));

int sum(int x, int y){
    return res[x][y]+res[x][y+1]+res[x+1][y]+res[x+1][y+1];
}
void checkout(int x, int y){
    For(i,x,x+1) For(j,y,j+1) if(res[x][y]==-1) res[x][y]=0;
}
bool ex(set<pair<int,int>>& ut, int x, int y){
    if(ut.find({x,y})==ut.end()) return false;
    return true;
}
void setvalue(int x, int y){
    int s=sum(x,y);
    if(s>)
}


void solve() {
	int n;
    cin >> n;
    FOR(i,0,n){
        FOR(j,0,n) cin>>a[i][j];
    }
    backtrack(0,0);

    set<pair<int,int>> ut;

    FOR(i,0,n){

        FOR(j,0,n){
            ut.clear();
            checkout(i,j);
            setvalue(i,j);


        }
    }





}


int main()
{
	IOS;
	ll t;
	t=1;
	//cin >> t;
	For(i,1,t) {
		solve();
		//cout << solve() << endl;
	}

	return 0;
}