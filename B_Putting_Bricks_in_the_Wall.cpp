#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define unordered_map umap
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//

void solve() {
	ll k,temp,sum,res,ans,n,x,y;
    bool forward;
    cin >> n;
    vector<string> s(n);
    FOR(i,0,n){
        cin >> s[i];
    }
    int st=0, end=0;
    if(s[0][1]=='1') st++;
    if(s[1][0]=='1') st++;
    if(s[n-1][n-2]=='1') end++;
    if(s[n-2][n-1]=='1') end++;
    
    if((st==0 && end==2) || (st==2 && end==0)){
        cout << 0 << endl;
        return;
    }
    if(st==end){
        if(st==0 || st==2){
            cout << 2 << endl;
            cout << 1 << ' ' << 2 << endl;
            cout << 2 << ' ' << 1 << endl;
        }
        if(st==1){
            cout << 2 << endl;
            cout << 1 << ' ' << 2 << endl;
            if(s[n-1][n-2]==s[0][1]){
                
            }
            else{
                cout << n << ' ' << n-1 << endl;
            }
        }
        return;
    }
    cout << 1 << endl;
    if(st==1){
        if(s[n-1][n-2]==s[0][1]){
            cout << 1 << ' ' << 2 << endl;
        }
        else{
            cout << 2 << ' ' << 1 << endl;
        }
    }
    else{
        if(s[n-1][n-2]==s[0][1]){
            cout << n << ' ' << n-1 << endl;
        }
        else{
            cout << n-1 << ' ' << n << endl;
        }
    }


}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}