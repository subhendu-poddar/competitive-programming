#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
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
#define max_heap priority_queryueue<ll>
#define min_heap priority_queryueue<ll,vv<ll>,greater<ll>>
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//
int n;
map<pair<int,int>,int> dp;

int query(int l, int r){
    int x;
    cout << "? " <<l<<" "<<r<<endl;
    cout.flush();
    cin>>x;
    return x;
}

int solve(int n) {
    int smax = query(1,n);
    if(smax!=1 && query(1,smax)==smax){
        int l=1, r=smax;
        while(l<r-1){
            int mid=(l+r)/2;
            if(query(mid,smax)==smax){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        return l;
    }    
    else{
        int l=smax, r=n;
        while(l<r-1){
            int mid=(l+r)/2;
            if(query(smax,mid)==smax){
                r=mid;
            }
            else{
                l=mid;
            }
        }
        return r;
    }

    return 0;
}
int main(){
    IOS;
    cin>>n;
    int k = solve(n);
    cout << "! " << k << endl;
    return 0;
}