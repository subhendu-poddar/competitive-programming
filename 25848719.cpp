#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t ,i, j;
    long long int n[t] , k[t] , d ;

    cin >> t ;
    for(i=0; i<t; i++)
    {
        cin >> n[i] >> k[i] ;
    }
    for(i=0;i<t;i++)
    {
        d=n[i]/k[i];
        

        if(d>=k[i] && ( (d%k[i]) == 0 ))
        {
            cout << "NO" << endl ;
        }
        else
            cout << "YES" << endl ;
    }
    return 0;
}
