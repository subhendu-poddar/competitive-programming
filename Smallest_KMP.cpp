#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//
void solve() {
	ll k,cnt,temp,sum,res,ans,n;
    string a,b,c;
    cin >> a >> b;
    map<char,ll> map1;
    vector<bool> check(a.size(),false);
    FOR(i,0,b.size()){
        map1[b[i]]++;
    }
    FOR(i,0,a.size()){
        if(map1[a[i]]){
            check[i]=true;
            map1[a[i]]--;
        }
    }
    FOR(i,0,a.size()){
        if(!check[i]){
            c+=a[i];
        }
    }
    sort(c.begin(),c.end());
    string d;
    temp=0;
    while(c[temp]<b[0] && temp<c.size()){
        temp++;
    }
    
    res=0;
    while(b[res]==b[0] && res<b.size()){
        res++;
    }
    if(res!=0 && res!=b.size()){
        if(b[res]>b[0]){
            while(c[temp]==b[0] && temp<c.size()){
                temp++;
            }
        }
    }

    FOR(i,0,temp){
        d+=c[i];
    }



    d+=b;
    FOR(i,temp,c.size()){
        d+=c[i];
    }
    cout << d << endl;


}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}