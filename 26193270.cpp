#include <bits/stdc++.h>

using namespace std;

int main() 
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


	long long t,i,j,c=0;
	cin >> t ;
	while(t--) {
		long long n,k;
		cin >> n >> k;
		long long a[n];
		c=0;
		for(i=0;i<n;i++)
			cin >> a[i];
		for(i=0;i<n-1;i++) {
			if(a[i]==a[i+1] && a[i]!=-1) {
				c=1;
				cout << "NO" << endl ;
				break;
			}
		}
		if(c==1)
			continue;
		if(k>2) {
			cout << "YES" << endl ;
			long int x=-1;
			while(a[++x]==-1);
			for(i=x-1;i>=0;i--) {
				j=k+1;
				while(j--) {
					if(a[i+1]!=j){
						a[i]=j;
						break;
					}
				}

			}
			for(i=0;i<n-1;i++) {
				if(a[i]!= -1)
					cout << a[i] << " ";
				else {
					j=k+1;
					while(j--) {
						if(a[i-1]!=j && a[i+1]!=j){
							a[i]=j;
							cout << a[i] << " ";
							break;
						}
					}
				}
			}
			if(a[n-1]!=-1)
				cout << a[n-1] << endl ;
			else {
				j=k+1;
				while(j--) {
					if(a[n-2]!=j){
						cout << j << endl ;
						break;
					}
				}
			}
		}

		else if(k==2) {
			long x=-1;
			while(a[++x]==-1);
			for(i=x-1;i>=0;i--) {
				j=k+1;
				while(j--) {
					if(a[i+1]!=j){
						a[i]=j;
						break;
					}
				}

			}
			for(i=1;i<n;i++) {
				if(a[i]==-1) {
					a[i]=3-a[i-1];
				}
			}
			for(i=0;i<n-1;i++){
				if(a[i]==a[i+1]) {
					cout << "NO" << endl ;
					c=1;
					break;
				}
			}
			if(c==1)
				continue;
			cout << "YES" << endl ;
			for(i=0;i<n;i++) {
				cout << a[i] << " ";
			}
			cout << endl ;


		}
	

	}
	
	return 0;

}