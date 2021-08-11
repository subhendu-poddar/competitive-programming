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
bool areSame(string& s, string& t){
    if(s.size()!=t.size()) return false;
    FOR(i,0,s.size()){
        if(s[i]!=t[i]) return false;
    }
    return true;
}

string solve(){

    string s,t;
    cin >> s >> t;

    FOR(i,0,s.size()){
        FOR(j,i,s.size()){
            if(j-i>=t.size()) break;
            string check=s.substr(i,j-i+1);
            if(areSame(check,t)) return "YES";

            rev(k,j-1,0){
                check+=s[k];
                if(check.size()>t.size()) break;
                if(areSame(check,t)) return "YES";
            }
        }
    }
    return "NO";
}

int main(){
    IOS;
    int t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        // solve();
        cout << solve() << endl;
    }
    return 0;
}