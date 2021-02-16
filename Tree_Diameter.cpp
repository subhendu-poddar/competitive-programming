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
vv<vv<ll>> tree(2000001,vv<ll>());
vv<ll> diameter(2000001,0);
vv<ll> downPath(2000001,0);

void find_downPath(ll src, ll par){
    bool leaf=false;
    ll temp=0;
    for(ll child:tree[src]){
        if(child!=par){
            leaf=true;
            find_downPath(child,src);
            temp = max(temp,1+downPath[child]);
        }
    }
    downPath[src]=leaf==true?temp:0;
}
void find_diameter(ll src, ll par){
    
    ll max1=0, max2=0;
    ll sub=0;
    for(ll child:tree[src]){
        if(child!=par){
            sub++;
            find_diameter(child,src);
            diameter[src]=max(diameter[src],diameter[child]);
            if(max1<downPath[child]){
                max2=max1;
                max1=downPath[child];
            }
        }
    }
    if(sub==0) return;

    ll temp=sub==1?1:2;

    diameter[src]=max(diameter[src],temp+max1+max2);
    //cout << src << ' ' << diameter[src] << endl;
}


void solve() {
	ll k,temp,sum,res,ans,n,x,y;
    cin >> n;
    FOR(i,1,n){
        cin >> x >> y;
        tree[x].pb(y);
        tree[y].pb(x);
    }
    find_downPath(1,0);
    find_diameter(1,0);
    cout << diameter[1] << endl;
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