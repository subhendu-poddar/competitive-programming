#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//

vector<pair<ll,ll>> change(ll i, ll j, vector<vector<ll>>& v, int code){
    vector<pair<ll,ll>> temp(3);
    temp[0].ff = i;
    temp[0].ss = j;
    v[i][j] = 1-v[i][j];
    ll cnt=1;

    if(code==1 || code==2 || code==5){
        v[i][j+1] = 1-v[i][j+1];
        temp[cnt].ff = i;
        temp[cnt].ss = j+1;
        cnt++;
    }
    if(code==1 || code==4){
        v[i+1][j+1] = 1-v[i+1][j+1];
        temp[cnt].ff = i+1;
        temp[cnt].ss = j+1;
        cnt++;
    }
    if(code==2 || code==3 || code==4){
        v[i+1][j] = 1-v[i+1][j];
        temp[cnt].ff = i+1;
        temp[cnt].ss = j;
        cnt++;
    }
    if(code==3){
        v[i+1][j-1] = 1-v[i+1][j-1];
        temp[cnt].ff = i+1;
        temp[cnt].ss = j-1;
        cnt++;
    }
    if(code==5){
        v[i-1][j+1] = 1-v[i-1][j+1];
        temp[cnt].ff = i-1;
        temp[cnt].ss = j+1;
        cnt++;
    }
    return temp;
}

vector<pair<ll,ll>> improve0(ll i, ll j, vector<vector<ll>>& v){
    return change(i,j,v,1);
}
vector<pair<ll,ll>> improve1(ll i, ll j, vector<vector<ll>>& v){
    if(v[i][j]==1){
        return change(i,j,v,4);
    }
    return change(i,j+1,v,3);
}
vector<pair<ll,ll>> improve2(ll i, ll j, vector<vector<ll>>& v){
    if(v[i][j]==1){
        return change(i,j+1,v,3);
    }
    if(v[i+1][j]==1){
        return change(i,j,v,1);
    }
    return change(i,j,v,2);
}
vector<pair<ll,ll>> improve3(ll i, ll j, vector<vector<ll>>& v){
    if(v[i][j]==1){
        if(v[i+1][j+1]==1){
            if(v[i][j+1]==1) return change(i,j,v,1);
            return change(i,j,v,4);
        }
        return change(i,j,v,2);
    }
    return change(i,j+1,v,3);
}

void solve() {
	ll k,ans,n,m;
    cin >> n >> m;
    string s;
    vector<vector<ll>> v(n,vector<ll>(m));
    vector<vector<pair<ll,ll>>> res;
    vector<pair<ll,ll>> temp;

    FOR(i,0,n){
        cin >> s;
        FOR(j,0,m){
            v[i][j] = s[j]-48;
        }
    }

    FOR(i,0,n-2){
        FOR(j,0,m){
            if(v[i][j]==0) continue;
            if(j<m-1){
                res.pb(change(i,j,v,1));
            }
            else{
                res.pb(change(i,j,v,3));
            }
        }
    }

    ll i=n-2;
    FOR(j,0,m-2){
        if(v[i][j]==0 && v[i+1][j]==0) continue;

        if(v[i][j]==1 && v[i+1][j]==1){
            res.pb(change(i,j,v,4));
        }
        else if(v[i][j]==1){
            res.pb(change(i,j,v,1));
        }
        else if(v[i+1][j]==1){
            res.pb(change(i+1,j,v,5));
        }
    }
    ll j=m-2;

    ll sum=0;
    if(v[i][j]==1) sum++;
    if(v[i+1][j]==1) sum++;
    if(v[i][j+1]==1) sum++;
    if(v[i+1][j+1]==1) sum++;

    if(sum>0){
        if(sum==4) sum=0;
        if(sum==0){
            res.pb(improve0(i,j,v));
            sum++;
        }
        if(sum==1){
            res.pb(improve1(i,j,v));
            sum++;
        }
        if(sum==2){
            res.pb(improve2(i,j,v));
            sum++;
        }
        if(sum==3){
            res.pb(improve3(i,j,v));
            sum++;
        }
    }

    cout<<res.size()<<endl; 
    FOR(i,0,res.size()){
        temp = res[i];
        FOR(j,0,3){
            cout<<temp[j].ff+1<<' '<<temp[j].ss+1<<' ';
        }
        cout<<endl;
    }

}


int main()
{
    //freopen("input.txt","r",stdin);
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}