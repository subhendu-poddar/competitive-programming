#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 1000000007
#define INF 1000000000000

//-------------------------------------------------//

void solve() {
	ll i,j,k,temp,sum,res=0,ans,n,x,y;
    cin >> x >> y;
    vector<ll> px,nx,py,ny;
    sum=100001;
    bool ch1[sum], ch2[sum], ch3[sum], ch4[sum];
    for(i=0;i<sum;i++) {
        ch1[i]=false;
        ch2[i]=false;
        ch3[i]=false;
        ch4[i]=false;
    }
    for(i=0;i<x;i++) {
        cin >> temp;
        if(temp==0) {
            res++;
        }
        else if(temp>0) {
            px.push_back(temp);
            ch1[temp]=true;
        }
        else {
            nx.push_back(-temp);
            ch3[-temp]=true;
        }
    }
    for(i=0;i<y;i++) {
        cin >> temp;
        if(temp==0) {
            res++;
        }
        else if(temp>0) {
            py.push_back(temp);
            ch4[temp]=true;
        }
        else {
            ny.push_back(-temp);
            ch2[-temp]=true;
        }
    }
    sort(py.begin(),py.end());
    sort(px.begin(),px.end());
    sort(ny.begin(),ny.end());
    sort(nx.begin(),nx.end());
    ans=res*(px.size()*py.size()+px.size()*ny.size()+nx.size()*py.size()+nx.size()*ny.size());
    
    for(i=0;i<nx.size();i++) {
        for(j=0;j<py.size();j++) {
            temp=py[j]*py[j];
            if((temp/nx[i])>px[px.size()-1]) {
                break;
            }
            if(temp%nx[i]==0 && ch1[temp/nx[i]]) {
                ans++;
            }
        }
    }
    for(i=0;i<py.size();i++) {
        for(j=0;j<px.size();j++) {
            temp=px[j]*px[j];
            if((temp/py[i])>ny[ny.size()-1]) {
                break;
            }
            if(temp%py[i]==0 && ch2[temp/py[i]]) {
                ans++;
            }
        }
    }
    for(i=0;i<px.size();i++) {
        for(j=0;j<ny.size();j++) {
            temp=ny[j]*ny[j];
            if((temp/px[i])>nx[nx.size()-1]) {
                break;
            }
            if(temp%px[i]==0 && ch3[temp/px[i]]) {
                ans++;
            }
        }
    }
    for(i=0;i<ny.size();i++) {
        for(j=0;j<nx.size();j++) {
            temp=nx[j]*nx[j];
            if((temp/ny[i])>py[py.size()-1]) {
                break;
            }
            if(temp%ny[i]==0 && ch4[temp/ny[i]]) {
                ans++;
            }
        }
    }
    
    cout << ans << endl;

	

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