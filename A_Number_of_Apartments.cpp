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
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//

struct node{
    int val;
    int x;
    int y;
    int z;
};

void solve() {
	ll k,temp,sum,res,ans,n;
    cin>>n;
    vector<node> a(n+1);

    For(i,0,n){
        a[i].val=0;
        a[i].x=0;
        a[i].y=0;
        a[i].z=0;

        if(i-3>=0 && a[i-3].val!=-1){
            a[i].x=a[i-3].x+1;
            a[i].y=a[i-3].y;
            a[i].z=a[i-3].z;
            continue;
        }
        if(i-5>=0 && a[i-5].val!=-1){
            a[i].y=a[i-5].y+1;
            a[i].x=a[i-5].x;
            a[i].z=a[i-5].z;
            continue;
        }
        if(i-7>=0 && a[i-7].val!=-1){
            a[i].z=a[i-7].z+1;
            a[i].y=a[i-7].y;
            a[i].x=a[i-7].x;
            continue;
        }
        if(i!=0) a[i].val=-1;
    }
    if(a[n].val==-1){
        cout << -1 << endl;
        return;
    }
    cout << a[n].x<<' '<<a[n].y<<' '<<a[n].z<<endl;
    

}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}