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

string ms(string s, ll last, ll& pos){
    ll n=s.size();
    ll temp=last;
    while(temp>0 && s[temp-1]=='0') --temp;
    string ans;
    FOR(i,0,temp){
        ans += s[i];
    }
    rev(i,s.size()-1,temp) ans+=s[i];
    rev(i,ans.size()-1,0){
        if(ans[i]=='1'){
            pos=i;
            break;
        }
    }
    return ans;



}

void solve() {
	ll k,temp,sum,res,ans=0,n,count,last1,pos;
    ll length,f1,f0,s1,s0;
    string s;
    cin >> s;
    n = s.size();
    vv<ll> a(n+1,0);
    For(i,1,n){
        a[i] = a[i-1]+s[i-1]-48;
    }
    
    set<pair<pair<ll,ll>,pair<ll,ll>>> uset;
    
    FOR(i,0,n){
        length=0;
        f1=0;
        f0=0;
        s1=0;
        s0=0;
        FOR(j,i,n){
            length++;
            if(s[j]=='0'){
                //s0++;
                if(s1==0){
                    f0++;
                }
                else{
                    s0++;
                }
            }
            else{
                if(s1==0){
                    s1++;
                }
                else{
                    f1++;
                    swap(s0,f0);
                }
                /*
                f1++;
                if(f1>1){
                    if(s1==0){
                        f1--;
                        s1++;
                    }
                    swap(s0,f0);
                }
                */


            }
            //printf("%lld %lld %lld %lld\n",f1,f0,s1,s0);
            //cout<<f1<<' '<<f0<<' '<<s1<<' '<<s0<<endl;
            uset.insert({{f1,f0},{s1,s0}});
        }
        //cout << endl;
    }
    //cout << endl;
    cout << uset.size() << endl;
    /*
    for(auto x:uset){
        printf("%lld %lld %lld %lld\n",x.ff.ff,x.ff.ss,x.ss.ff,x.ss.ss);
    }
    */




}


int main()
{
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
