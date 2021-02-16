#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//

void solve() {
	ll i,j,k,temp,sum,res,ans,n,p,x,y;
    cin >> n >> p;
    vector<ll> arr(n),v(n);
    for(i=0;i<n;i++) {
        cin >> arr[i];
        v[i]=arr[i];
    }
    sort(v.begin(), v.end());
    k=0;
    if(p%v[n-1]!=0) {
        cout << "YES ";
        for(i=0;i<n;i++) {
            if(arr[i]==v[n-1]) {
                cout << p/v[n-1]+1 << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << endl;
        return;
    }
    for(i=1;i<n;i++) {
        if(v[i]%v[i-1]!=0) {
            x=v[i];
            y=v[i-1];
            k=1;
        }
    }
    if(k==0) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES ";
    if(p%x==0) {
        for(i=0;i<n;i++) {
            if(arr[i]==x) {
                cout << p/x-1 << " ";
            }
            else if(arr[i]==y) {
                cout << x/y+1 << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
    }
    else {
        for(i=0;i<n;i++) {
            if(arr[i]==x) {
                cout << p/x+1 << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
    }
    cout << endl;
    
    




	

}

//-------------------------------------------------//

int main()
{
	//freopen("input.txt", "r", stdin);
	IOS;
	ll t;
	//t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}