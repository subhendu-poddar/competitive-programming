#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000
ll digitsum(ll n) {
    ll res=0;
    while(n) {
        res+=n%10;
        n/=10;
    }
    return res;
}
int main()
{
	IOS;
	ll i,j,t,c,n,d,k,r,s,temp,sum,res,a,b,w,x,y,z;

    cin >> t;
    while(t--) {
        cin >> n >> d;
        ll m[10];
        FOR(i,1,10) m[i]=-1;
        queue<pair<ll,ll> > q;
        pair<ll,ll> p;
        q.push({n,0});
        ll count=0;
        while(count<1000000 && !q.empty()) {
           p=q.front();
           //cout << p.first << " " << p.second << endl;
           q.pop();
           if(p.first<10) {
               if(m[p.first]==-1) m[p.first]=p.second;
           }
           else q.push({digitsum(p.first),p.second+1});
           q.push({p.first+d,p.second+1});
           count++;
        }
        FOR(i,1,10) if(m[i]!=-1) {
            cout << i << " " << m[i] << endl;
            break;
        }
    }
    
    
    	

	return 0;
}