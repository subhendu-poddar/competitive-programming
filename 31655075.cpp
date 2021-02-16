#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	 ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
#define mod 998244353
#define INF 1000000000000
#define bill 1000000000000

//-------------------------------------------------//

string infixToPostfix(string s){
    std::stack<char> st; 
    st.push('N'); 
    string ns;
    ll i;
    FOR(i,0,s.size()){
    	if(s[i]=='#'){
    		ns+=s[i];
    	}
    	else if(s[i]==')'){
    		while(st.top()!='N' && st.top()!='('){
    			ns+=st.top();
    			st.pop();
    		}
    		if(st.top()=='('){
    			st.pop();
    		}
    	}
    	else{
    		st.push(s[i]);
    	}
    }
    while(st.top()!='N'){
    	ns+=st.top();
    	st.pop();
    }
    return ns;
}

ll cn(ll* temp1, ll* temp2, ll x, ll y){
	if(x==y) return (temp1[x]*temp2[y]);
	return ((temp1[x]*temp2[y])+(temp1[y]*temp2[x]));
}

stack<ll>* findans(string s){
	//cout<<s<<endl;
	ll temp1[4],temp2[4],ans;
	ll i,j;
	stack<ll>* st=new stack<ll> [4];
	FOR(i,0,4){
		st[i].push(-1);
	}
	FOR(i,0,s.size()){
		if(s[i]=='#'){
			FOR(j,0,4){
				st[j].push(748683265);
			}
		}
		else{
			FOR(j,0,4){
				temp1[j]=st[j].top();
				st[j].pop();
				temp2[j]=st[j].top();
				st[j].pop();
			}
			if(s[i]=='^'){
				st[0].push(cn(temp1,temp2,0,0)+cn(temp1,temp2,1,1)+cn(temp1,temp2,2,2)+cn(temp1,temp2,3,3));
				st[1].push(cn(temp1,temp2,0,1)+cn(temp1,temp2,2,3));
				st[2].push(cn(temp1,temp2,0,2)+cn(temp1,temp2,1,3));
				st[3].push(cn(temp1,temp2,0,3)+cn(temp1,temp2,1,2));
			}
			else if(s[i]=='&'){
				st[0].push(cn(temp1,temp2,0,0)+cn(temp1,temp2,0,1)+cn(temp1,temp2,0,2)+cn(temp1,temp2,0,3)+cn(temp1,temp2,2,3));
				st[1].push(cn(temp1,temp2,1,1));
				st[2].push(cn(temp1,temp2,1,2)+cn(temp1,temp2,2,2));
				st[3].push(cn(temp1,temp2,1,3)+cn(temp1,temp2,3,3));
			}
			else{
				st[0].push(cn(temp1,temp2,0,0));
				st[1].push(cn(temp1,temp2,1,1)+cn(temp1,temp2,2,3)+cn(temp1,temp2,1,3)+cn(temp1,temp2,1,2)+cn(temp1,temp2,0,1));
				st[2].push(cn(temp1,temp2,0,2)+cn(temp1,temp2,2,2));
				st[3].push(cn(temp1,temp2,0,3)+cn(temp1,temp2,3,3));
			}
			FOR(j,0,4){
				st[j].top()%=mod;
			}
		}
	}
	return st;
}

void solve() {
	ll i,j,k,temp,sum,res,ans,n;
	string exp;
	cin>>exp;
	stack<ll>* st=new stack<ll> [4];
	string s=infixToPostfix(exp);
	st=findans(s);
	FOR(i,0,4){
		cout<<(st[i].top())%mod<<' ';
	}
	cout<<endl;

}

//-------------------------------------------------//

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);	
	IOS;
	ll t,i;
	//t=1;
	cin >> t;
	FOR(i,0,t) {
		solve();
	}

	return 0;
}