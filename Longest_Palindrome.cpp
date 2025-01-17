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
string solve() {
    int k,temp,sum,res,ans=1,n;
    int st=0,end=0;
    int t1,t2;
    string s;
    cin>>s;

    FOR(i,1,s.size()-1){
        t1 = i-1;
        t2=i+1;
        if(ans>=2*min(i,n-i)+1) continue;

        while(t1>=0 && t2<s.size() && s[t1]==s[t2]){
            t1--;
            t2++;
        }
        t1++;
        t2--;

        if(ans<t2-t1+1){
            ans=t2-t1+1;
            st=t1;
            end=t2;
        }
        if(s[i]==s[i+1]){
            t1 = i-1;
            t2 = i+2;
            if(ans>=2*min(i,n-i)+1) continue;

            while(t1>=0 && t2<s.size() && s[t1]==s[t2]){
                t1--;
                t2++;
            }
            t1++;
            t2--;

            if(ans<t2-t1+1){
                ans=t2-t1+1;
                st=t1;
                end=t2;
            }
        }
    }

    return s.substr(st,end-st+1);

}
int main(){
    IOS;
    //solve();
    cout << solve() << endl;
    return 0;
}