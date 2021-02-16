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

string reverse(string s){
    string ans;
    rev(i,s.size()-1,0){
        ans+=s[i];
    }
    return ans;
}
bool iseven(string s){
    int ans=0;
    FOR(i,0,s.size()){
        if(s[i]=='1') ans++;
    }
    return ans%2==0;
}
void solve() {
	ll k,temp,sum,res,ans,n;
    cin >> n;
    string s;
    unordered_set<string> uset;
    vector<string> a(n);

    FOR(i,0,n){
        cin >> a[i];
    }
    FOR(i,0,n){
        FOR(j,0,i){
            if(a[i]==a[j] || (a[i]==reverse(a[j]) )){
                cout<<i<<' '<<j<<": "<<a[i]<<endl;
                
            }
        }
    }




        /*
        if(uset.find(s)==uset.end() && uset.find(reverse(s))==uset.end()){
            uset.insert(s);
        }
        else{
            cout << "Found: " << s << endl;
            return;
        }
        */
    cout << "Not Found" << endl;
    
}


int main()
{
	IOS;
	ll t;
    freopen("output.txt","r",stdin);
	t=1;
	//cin >> t;
	For(i,1,t) {
		solve();
		//cout << solve() << endl;
	}

	return 0;
}