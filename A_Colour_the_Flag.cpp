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
char opp(char ch){
    if(ch=='R') return 'W';
    return 'R';
}

void adjust(vv<string>& s, int x, int y){
    char ch=s[x][y];
    if(x%2!=0) ch=opp(s[x][y]);
    if(y%2!=0) ch=opp(ch);

    FOR(i,0,s.size()){
        FOR(j,0,s[i].size()){
            if((i+j)%2==0){
                if(s[i][j]==opp(ch)){
                    cout << "NO" << endl;
                    return;
                }
                s[i][j]=ch;
            }
            else{
                if(s[i][j]==ch){
                    cout << "NO" << endl;
                    return;
                }
                s[i][j]=opp(ch);
            }
        }
    }

    cout << "YES" << endl;
    FOR(i,0,s.size()){
        FOR(j,0,s[i].size()){
            cout<<s[i][j];
        }
        cout<<endl;
    }



}


void solve() {
    ll k,temp,sum,res,ans,n,m;
    cin >> n >> m;
    vv<string> s(n);


    FOR(i,0,n){
        cin >> s[i];
    }
    bool f=false;
    FOR(i,0,n){
        FOR(j,0,m){
            if(s[i][j]!='.'){
                adjust(s,i,j);
                return;
            }
        }
    }
    cout << "YES" << endl;
    FOR(i,0,n){
        FOR(j,0,m){
            if((i+j)%2==0){
                cout << "W";
            }
            else{
                cout << "R";
            }
        }
        cout << endl;
    }
    // }



}
int main(){
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