#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//

bool leapyear(ll x) {
    if((x%4==0 && x%100!=0) || x%400==0) {
        return true;
    }
    return false;
}

ll* store(ll* arr) {
    ll i;
    for(i=2;i<=6000;i++) {
        if(leapyear(i-1)) {
            arr[i]=arr[i-1]+2;
        }
        else {
            arr[i]=arr[i-1]+1;
        }
        if(arr[i]>7) {
            arr[i]-=7;
        }
    }
    return arr;
}

void solve(ll* arr) {
	ll i,j,k,temp,sum,res,ans,n=0,count=0;
	ll m1,m2,y1,y2;
    cin >> m1 >> y1 >> m2 >> y2;
    if(m1>2) {
        y1++;
    }
    if(m2==1) {
        y2--;
    }
    n=(y2-y1)/2800;
    y2-=n*2800;
    temp=y1/2800;
    y1-=temp*2800;
    y2-=temp*2800;
    for(i=y1;i<=y2;i++) {
        if(arr[i]==4 || (!leapyear(i) && arr[i]==5)) {
            count++;
        }
    }
    count+=707*n;
    cout << count << endl;
    




	

}

//-------------------------------------------------//

int main()
{
	//freopen("input.txt", "r", stdin);
	IOS;
    ll *arr= new ll [6001];
    arr[0]=7;
    arr[1]=2;
    arr=store(arr);
	ll t;
	//t=1;
	cin >> t;
	while(t--) {
		solve(arr);
	}

	return 0;
}