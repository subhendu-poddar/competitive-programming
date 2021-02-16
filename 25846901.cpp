#include <bits/stdc++.h>
using namespace std;

int count1(char *s)
{
    int i,c=0;
    for( i=0; i<strlen(s); i++)
    {
        if(s[i]=='1')
            c++;
    }
    if((c%2)==0)
        return 0;
    return 1;    
}

int main()
{
    int i , t ;
    cin >> t ;
    char s [t][100000] ;
    for(i=0;i<t;i++)
        cin >> s[i] ;
    for(i=0;i<t;i++)
    {
        if( count1(s[i]) )
            cout << "WIN" << endl ;
        else 
            cout << "LOSE" << endl ;    
    }
    return 0;
}