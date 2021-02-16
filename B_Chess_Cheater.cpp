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


ll solve() {
	ll k,temp=5,sum,res,ans=0,n,count1=0,count2=0;
    cin >> n >> k;
    string s1,s2,s3;
    cin >> s1;
    FOR(i,0,n){
        if(s1[i]=='W'){
            s2+=s1[i];
        }
        else{
            if(i!=0 && s1[i-1]=='W' && k>0){
                k--;
                s2+='W';
            }
            else{
                s2+='L';
            }
        }
    }

    FOR(i,0,n){
        if(s2[i]=='W') s3+=s2[i];
        else{
            if(k>0){
                s3+='W';
                k--;
            }
            else{
                s3+='L';
            }
        }
    }
    FOR(i,0,n){
        if(s3[i]=='W'){
            if(i!=0 && s3[i-1]=='W'){
                ans+=2;
            }
            else{
                ans++;
            }
        }
    }
    return ans;


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
		cout << solve() << endl;
	}

	return 0;
}