#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//

void solve() {
	ll i,j,n,k,temp,sum,res,ans;
    cin >> n;
    if(n%2==1 && n!=1) {
        cout << "Boo" << endl;
        return;
    }
    cout << "Hooray" << endl;
    ll arr[n+1][n+1];
    memset(arr,0,sizeof(arr));
    for(i=1;i<=n;i++) {
        arr[i][i]=2*n-1;
    }
    for(i=2;i<=n;i++) {
       arr[1][i]=i-1;
    }
    for(i=2;i<n;i++) {
        temp=arr[i-1][n];
        temp+=2;
        if(temp>n-1) {
            temp-=n-1;
        }
        arr[i][n]=temp;
    }
    for(i=2;i<n;i++) {
        temp=arr[i][n];
        for(j=i+1;j<n;j++) {
            temp++;
            if(temp>n-1) {
                temp-=n-1;
            }
            arr[i][j]=temp;
        }
    }
    for(i=2;i<=n;i++) {
        for(j=1;j<i;j++) {
            arr[i][j]=arr[j][i]+n-1;
        }
    }
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }




	

}

//-------------------------------------------------//

int main()
{
	IOS;
	ll t;

	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}