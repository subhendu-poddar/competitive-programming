#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void swap(ll *a,ll *b){
	ll temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    
    ll t;
    cin>>t;
    while(t--){
    	ll n,k;
    	cin>>n>>k;
    	ll a[n];
    	for(ll i=0;i<n;i++){
    		cin>>a[i];
    	}
        if(k>n/2 && n%2!=0) a[n/2]=0;
    	ll d=(k/n);
    	ll r=(k%n);
    	if(d%3==1){
    		if(n%2==0){
    			for(ll i=0;i<(n/2);i++){
    				swap(&a[i],&a[n-i-1]);
    				a[i]=a[i]^a[n-i-1];
    			}
    		}
    		else{
    			for(ll i=0;i<=(n/2);i++){
    				swap(&a[i],&a[n-i-1]);
    				a[i]=a[i]^a[n-i-1];
    			}
    		}
    	}
    	else if(d%3==2){
    		if(n%2==0){
    			for(ll i=0;i<(n/2);i++){
    				swap(&a[i],&a[n-i-1]);
    				a[n-i-1]=a[i]^a[n-i-1];
    			}
    		}
    		else{
    			for(ll i=0;i<=(n/2);i++){
    				swap(&a[i],&a[n-i-1]);
    				a[n-i-1]=a[i]^a[n-i-1];
    			}
    		}
    	}
    	for(ll i=0;i<r;i++){
    		a[i%n]=a[i%n]^a[n-(i%n)-1];
    	}
    	for(ll i=0;i<n;i++){
    		cout<<a[i]<<" ";
    	}
    	cout<<endl;
    }
}
