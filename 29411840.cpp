#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//

void solve(ll &res) {
	ll i,j,k,temp,sum,ans,n,i1,j1,j2;
    char ch;
    cin >> n;
    ll arr[4][4];
    for(i=0;i<4;i++) for(j=0;j<4;j++) arr[i][j]=0;
    for(i=0;i<n;i++) {
        cin >> ch >> k;
        k=(k-3)/3;
        arr[ch-65][k]++;
    }
    bool check[4];
    memset(check,false,sizeof(check));
    ll val[4],val2[4];
    ans=-INF;
    for(i=0;i<4;i++) {
        if(!check[i]) {
            check[i]=true;
            val[0]=arr[0][i];
            for(j=0;j<4;j++) {
                if(!check[j]) {
                    val[1]=arr[1][j];
                    check[j]=true;
                    for(i1=0;i1<4;i1++) {
                        if(!check[i1]) {
                            val[2]=arr[2][i1];
                            check[i1]=true;
                            for(j1=0;j1<4;j1++) {
                                if(!check[j1]) {
                                    check[j1]=true;
                                    val[3]=arr[3][j1];
                                    for(j2=0;j2<4;j2++) {
                                        val2[j2]=val[j2];
                                    }
                                    sort(val2,val2+4);
                                    sum=0;
                                    for(j2=0;j2<4;j2++) {
                                        sum+=(25+25*j2)*val2[j2];
                                        if(val2[j2]==0) {
                                            sum-=100;
                                        }
                                    }
                                    ans=max(ans,sum);
                                    check[j1]=false;
                                }
                            }
                            check[i1]=false;
                        }
                    }
                    check[j]=false;
                }
            }
            check[i]=false;
        }
    }
    res+=ans;
    cout << ans << endl;

	

}

//-------------------------------------------------//

int main()
{
	//freopen("input.txt", "r", stdin);
	IOS;
	ll t,res=0;
	//t=1;
	cin >> t;
	while(t--) {
		solve(res);
	}
	cout << res << endl;

	return 0;
}