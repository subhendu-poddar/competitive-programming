#include <bits/stdc++.h>
using namespace std;

int max(int x,int y)
{
    return (x>y?x:y);
}

int min(int x,int y)
{
    return (x<y?x:y);
}



int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n;
        cin >> n ;
        int c[n], h[n], a[n];
        for(int i=0;i<n;i++)
            a[i] = 0 ;
        for(int i=0;i<n;i++)
            cin >> c[i] ;
        for(int i=0;i<n;i++)
            cin >> h[i] ;
        for(int i=0;i<n;i++)
        {
            a[max(0,i-c[i])]+=1;
            a[(min(n-1,i+c[i]))+1]-=1;
        }
        for(int i=1;i<n;i++)
        {
            a[i] += a[i-1] ;
        }
        sort(a,a+n);
        sort(h,h+n);
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=h[i])
            {
                break;
            }
            else
            {
                ++f;
            }
        }
        if(f==n)
            cout << "YES" << endl ;
        else
        {
                cout << "NO" << endl ;
        }
            
    }
}