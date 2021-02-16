#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int t,i,sum,c;
	long long int *n;
	cin>>t;
	n=(long long int *)calloc(t, sizeof (long int));
	for(i=0;i<t;i++)
	cin>>n[i];
	for(i=0;i<t;i++)
	{
		sum=0;
		while(n[i]>0)
		{
			c=n[i]%10;
			n[i]=n[i]/10;
			sum=sum+c;
		}
		cout<<sum<<endl;
	}
	return 0;
}			