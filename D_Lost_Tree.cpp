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
    int temp,sum,res,n,next=1,minv;
    cin >> n;
    map<pair<int,int>,bool> mp;
    vv<int> a(n);
    queue<int> q;


    cout << "? " << 1 << endl;
    cout.flush();

    int odd=0, even=0;
    FOR(i,0,n) {
        cin >> a[i];
        if(a[i]%2==0) even++;
        else odd++;

        if(a[i]==1)
            mp[{min(i+1,next), max(i+1,next)}]=true;
    }

    if(even<=odd){
        FOR(i,0,n){
            if(a[i]%2==0 && a[i]!=0){
                q.push(i+1);
            }
        }
    }
    else{
        FOR(i,0,n){
            if(a[i]%2!=0){
                q.push(i+1);
            }
        }
    }

    

    while(mp.size()<n-1 && !q.empty()) {
        next = q.front();
        q.pop();

        cout << "? " << next << endl;
        cout.flush();

        FOR(i,0,n) {
            cin >> a[i];
            if(a[i]==1)
                mp[{min(i+1,next), max(i+1,next)}]=true;
        }
    }

    

    cout << "!" << endl;
    for(auto x:mp){
        cout << x.ff.ff << " " << x.ff.ss << endl;
    }


}
int main(){
    IOS;
    int t;
    //t=1;
    // cin >> t;
    // For(i,1,t) {
    solve();
        //cout << solve() << endl;
    // }
    return 0;
}