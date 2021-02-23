#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,k,a,b,c=1,d=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(k=1;k<n;k++)
        {
            c=c+pow(2,k);
            if(c>n)
            {
                cout<<1<<endl;
                c=1;
                break;
            }
            if(n%c==0)
            {
                cout<<n/c<<endl;
                c=1;
                break;
            }
        }
    }
}
