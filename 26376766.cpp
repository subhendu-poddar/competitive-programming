#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long t;
	cin >> t;
	while(t--)
	{
		long long i,j,a,b,c,k,count=0,m;
		cin >> a >> b >> c;

		m = (a-1)*(c-1);
		long long s[m];
		m=0;
		for(i=1;i<a;i++)
		{
			for(k=1;k<c;k++)
			{
				s[m] = i*k;
				m++;	
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=1;j<=b;j++)
			{
				if((j*j)<s[i])
					count++;
			}
		}
		cout << count << endl ;

	}
	return 0;
}