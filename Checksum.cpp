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

void filter(vv<vv<int>>& a){
    int n=a.size()-1;
    bool flag=false;

    For(i,1,n){
        int count=0;
        For(j,1,n){
            if(a[i][j]==-1){
                count++;
            }
        }
        if(count==1){
            flag=true;
            For(j,1,n){
                if(a[i][j]==-1){
                    a[i][j]=1;
                }
            }
        }
    }

    For(j,1,n){
        int count=0;
        For(i,1,n){
            if(a[i][j]==-1){
                count++;
            }
        }
        if(count==1){
            flag=true;
            For(i,1,n){
                if(a[i][j]==-1){
                    a[i][j]=1;
                }
            }
        }
    }

    if(flag) filter(a);
    // cout << "return" << endl;
}

bool finished(vv<vv<int>>& a){
    int n=a.size()-1;
    For(i,1,n){
        For(j,1,n){
            if(a[i][j]==-1){
                return false;
            }
        }
    }
    return true;
}

int find(vv<vv<int>> a, vv<vv<int>>& b){
    filter(a);

    if(finished(a)) return 0;
    int ans=INT_MAX;
    int n=a.size()-1;


    For(i,1,n){
        For(j,1,n){
            if(a[i][j]==-1){
                a[i][j]=1;
                ans = min(ans, b[i][i]+find(a,b));
                a[i][j]=-1;
            }
        }
    }

    return ans;


}



int solve() {
    int k,temp,sum,res,ans,n;
    cin>>n;
    vv<vv<int>> a(n+1, vv<int> (n+1)), b(n+1, vv<int> (n+1));
    vv<int> r(n+1), c(n+1);

    For(i,1,n){
        For(j,1,n){
            cin >> a[i][j];
        }
    }
    For(i,1,n){
        For(j,1,n){
            cin >> b[i][j];
        }
    }
    For(i,1,n){
        cin >> r[i];
    }
    For(i,1,n){
        cin >> c[i];
    }

    return find(a,b);



}
int main(){
    IOS;
    int t;
    //t=1;
    cin >> t;
    For(i,1,t) {
        // solve();
        cout << "Case #" << i << ": " << solve() << endl;
    }
    return 0;
}