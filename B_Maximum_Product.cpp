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

ll solve() {
	ll temp=5,sum,res,ans=1,n,last=-1, cnt=0, minus=0, neg=0, pos=0, zr=0;
    cin >> n;
    vector<ll> v(n);
    FOR(i,0,n) cin >> v[i];

    sort(v.begin(), v.end(), greater<ll> ());
    //FOR(i,0,n) cout << v[i] << ' ';
    //cout << endl;

    FOR(i,0,n){
        if(v[i]<0) neg++;
        if(v[i]>0) pos++;
        if(v[i]==0) zr++;
    }
    if((pos+neg)<5 || ((pos+neg)==5 && neg%2!=0 && zr>0) ){
        return 0;
    }
    ll st=0, end=n-1;
    while(st<=end){
        if(abs(v[st])>abs(v[end])){
            ans*=v[st];
            ++st;
            ++cnt;
        }
        else{
            ans*=v[end];
            end--;
            ++cnt;
        }
        //cout << ans << ' ' << st << ' ' << end << endl ;
        if(cnt>=5) break;
    }
    
    return max(ans,max(ans*v[end]/v[st-1],ans*v[st]/v[end+1]));

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
		cout << solve() << endl;
	}

	return 0;
}