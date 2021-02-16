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
	ll k,temp=0,sum,res,ans,n,cnt1=0,count=0,cnt2=0;
	cin>>n>>k;
	ll arr[n+1];
	For(i,1,n){
		cin>>arr[i];
	}
	vector<ll> v1[n+1], v2[n+1];
    vector<bool> vis(n+1, false);
    For(i,1,n){
        if (vis[i] || arr[i]==i){
        	continue;
        }
        ll j=i;
        while (!vis[j]){
        	v1[cnt1].pb(j);
            vis[j] = true;
            j = arr[j];
        }
        temp=v1[cnt1].size();
        if(temp%2==0){
        	FOR(j,0,temp){
        		v2[cnt2].pb(v1[cnt1][j]);
        	}
        	++cnt2;
        	count+=temp/2;
        }
        else{
       		count+=((temp-1)/2);
        }
        ++cnt1;
    }

	if(count>k || cnt2%2!=0){
		cout<<-1<<endl;
		return;   
	}
	cout<<count<<endl;
	FOR(i,0,cnt1){
		temp=v1[i].size();
		if(temp%2!=0){
			ll head=temp-3;
			while(head>=0){
				cout<<v1[i][head]<<' '<<v1[i][head+1]<<' '<<v1[i][head+2]<<endl;
				head-=2;
			}
		}		
	}
	for(ll i=0;i<cnt2;i+=2){
		ll temp1=v2[i].size();
		ll temp2=v2[i+1].size();
		ll st=0;
		while(st<temp1-2){
			cout<<v2[i][st]<<' '<<v2[i][st+1]<<' '<<v2[i][temp1-1]<<endl;
			st+=2;
		}
		st=0;
		while(st<temp2-2){
			cout<<v2[i+1][st]<<' '<<v2[i+1][st+1]<<' '<<v2[i+1][temp2-1]<<endl;
			st+=2;
		}
		cout<<v2[i][temp1-2]<<' '<<v2[i][temp1-1]<<' '<<v2[i+1][temp2-2]<<endl;
		cout<<v2[i+1][temp2-2]<<' '<<v2[i][temp1-2]<<' '<<v2[i+1][temp2-1]<<endl;
	}
	return;
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