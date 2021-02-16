#include <bits/stdc++.h>

using namespace std;

/*long long comb(long long a, long long b)
{
	long long i, sum1=1,sum2=1;
	if((b*2)>a)
		b=a-b;
	for(i=a;i>=(a-b+1);i--)
		sum1 *= i;
	for(i=1;i<=b;i++)
		sum2 *= i;
	return (long long)(sum1/sum2);	//not working
}
*/
/*long long int comb(long long int n, long long int k)
{
    long long int C[n + 1][k + 1];
    long long int i, j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] +
                          C[i - 1][j];
        }
    }

    return C[n][k]; working
}
*/
/*long long comb(long long n, long long r)
{
	long long i,n1=1,r1=1,r2=1,ans=1;
	for(i=1;i<=n;i++)
	{
		n1*=i;
	}
	for(i=1;i<=r;i++)
	{
		r1*=i;
	}
	for(i=1;i<=n-r;i++)
	{
		r2*=i;
	}
	return (long long)((n1)/(r1*r2)); //not working

}*/
long long comb(long long n, long long k)
{
	long long i,ans=1;
	if(k>n/2)
		k = n-k;
	for(i=1;i<=k;i++)
	{
		ans = ans*(n-i+1)/i;
	}
	return ans;
}
int main() 
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	long long t,n,k,i,j,l;
	cin >> t ;
	while(t--)
	{
		cin >> n >> k;

		long long a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		sort(a,a+n);
		long long count=1;
		for(i=k-2;i>=0;i--)
		{
			if(a[i]==a[k-1])
				++count;
			else
				break;
		}
		l=count;
		for(i=k;i<n;i++)
		{
			if(a[i]==a[k-1])
				++count;
			else
				break;
		}
		/*long long sum1=1 , sum2=1;
		if((l*2)>count)
			l = count-l;
		for(i=count-l+1;i<=count;i++)
			sum1 = sum1*i;
		for(i=1;j<=l;i++)
			sum2 = sum2*i;
*/
		cout << comb(count,l) << endl ;
	}
	
	return 0;
}
