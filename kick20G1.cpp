#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//

ll computeCost(vector<ll> arr, ll X, ll N, ll M)
{
    ll cost = 0;
    for (ll i = 0; i < N; i++)
        cost += min(abs(arr[i] - X), min(abs(M + arr[i] - X), abs(M - arr[i] + X)));
    return cost;
}
ll solve(){

    ll N, M;
    cin >> N >> M;
    vector<ll> arr(N);

    FOR(i,0,N){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    ll low1=INT_MAX, low2, high1=INT_MIN, high2, mid1, mid2, cost1, cost2;
    FOR(i,0,N){
        low1 = min(low1,arr[i]);
        high1 = max(high1,arr[i]);
    }
    low2 = high1;
    high2 = M+low1;

    while((high1-low1)>2){
        mid1 = low1 + (high1-low1)/3;
        mid2 = high1 - (high1-low1)/3;
        cost1 = computeCost(arr,mid1,N,M);
        cost2 = computeCost(arr,mid2,N,M);
        if(cost1<cost2){
            high1=mid2;
        }
        else{
            low1=mid1;
        }
    }
    while((high2-low2)>2){
        mid1 = low2 + (high2-low2)/3;
        mid2 = high2 - (high2-low2)/3;
        cost1 = computeCost(arr,mid1,N,M);
        cost2 = computeCost(arr,mid2,N,M);
        if(cost1<cost2){
            high2=mid2;
        }
        else{
            low2=mid1;
        }
    }
    return min(computeCost(arr,(high1+low1)/2,N,M), computeCost(arr,(high2+low2)/2,N,M));
}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		cout << "Case #" << i << ": " << solve() << endl;
	}

	return 0;
}