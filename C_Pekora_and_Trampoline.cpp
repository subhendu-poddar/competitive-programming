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
#define max_heap priority_queue<ll>
#define min_heap priority_queue<ll,vv<ll>,greater<ll>>
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//
ll solve() {
    ll k,temp,sum,res,ans=0,n;
    cin>>n;
    vv<ll> a(n),dp(n,0);
    FOR(i,0,n){
        cin>>a[i];
    }
    dp[0]=a[0]-1;
    vv<bool> flag(n,false);
    FOR(i,0,n){
        if(a[i]!=1 || (i>0 && flag[i-1] && a[i-1]==1)){
            flag[i]=true;
        }
        else if(i-2>=0 && flag[i-2]==true){
            flag[i]=true;
        }
    }


    FOR(i,1,n){
        temp=a[i]-1;
        FOR(j,0,i){
            if(temp<=0){
                break;
            }
            if(j==i-1 && a[j]==1 && flag[j]){
                
            }
            if(j+a[j]>=temp){
                temp -= (j+a[j]-i+1);
            }
        }
        if(temp>0){
            dp[i]=temp;
        }
        cout<<temp<<' ';
    }
    cout<<endl;
    FOR(i,0,n){
        ans+=dp[i];
    }
    return ans;
}
int main(){
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