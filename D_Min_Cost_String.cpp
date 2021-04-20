#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr pair<int,int>
#define setpr(x) fixed<<setprecision(10)<<x
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define For(i,a,n) for(int i=a;i<=n;i++)
#define rev(i,n,a) for(int i=n;i>=a;i--)
#define mod 1000000007
#define INF 1000000000000
#define max_heap priority_queue<int>
#define min_heap priority_queue<int,vv<int>,greater<int>>
int gcd(int x,int y) {return __gcd(x,y);}
int lcm(int x,int y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//
void solve() {
    int k,temp,sum,res,ans,n;
    char ch1, ch2;

    cin >> n >> k;
    
    string s; 
    s+='a'+k-1;

    map<pair<char,char>, int> count;

    FOR(i,1,n){
        ch1 = s[i-1];

        char c;
        int val = INT_MAX;
        bool checked = false;

        FOR(j,0,k){
            ch2 = 'a'+j;
            
            if(!count[{ch1, ch2}]){
                s += ch2;
                checked = true;
                count[{ch1, ch2}]++;
                break;
            }

            int prev = count[{ch1, ch2}];

            if( prev< val ){
                c = ch2;
                val = prev;
            }  

        }

        if(!checked){
            s += c;
            count[{ch1,c}]++;
        }

    }

    cout << s << endl;






}
int main(){
    IOS;
    int t;
    t=1;
    //cin >> t;
    For(i,1,t) {
        solve();
        //cout << solve() << endl;
    }
    return 0;
}