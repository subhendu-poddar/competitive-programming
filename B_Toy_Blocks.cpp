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


ll solve() {
	ll k,temp,sum=0,res,ans=0,n;
    cin>>n;
    vector<ll> a(n);
    FOR(i,0,n){
        cin>>a[i];
        sum += a[i];
    }
    





    /*
    sort(a.begin(),a.end());
    res=a[n-1];
    FOR(i,0,n-1){
        sum += (res-a[i]);
    }
    FOR(i,0,n-1){
        //if(sum==0) break;
        temp = sum-(res-a[i]);
        if(temp==a[i]) continue;
        if(temp>res){
            ans += (res-a[i]);
            sum -= (res-a[i]);
            a[i] = res;
            continue;
        }
        if(a[i]>temp){
            k = ((a[i]-temp)%(n-1));
            if(k>0){
                k = n-1-k;
            }
            ans += k;
            a[i] += k;
            sum -=k;
        }
        else{
            k = temp - a[i];
            ans += k;
            sum -= k;
            a[i] = temp;
        }
        if(sum<0){
            sum += (n-1);
        }
    }
    
    FOR(i,0,n) cout<<a[i]<<' ';
    cout<<endl;
    cout<<"ans: ";
    */
    return ans;
}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		cout<<solve()<<endl;
	}

	return 0;
}