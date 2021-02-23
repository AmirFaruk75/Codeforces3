#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n%7==0)
        {
            cout<<n/7;
        }
        else{
            cout<<(n/7)+1;
        }
    }
}
