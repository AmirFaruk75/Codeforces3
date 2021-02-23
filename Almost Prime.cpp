#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,i,j,a=0,b=0,c=0;
    cin>>n;
    int primes[n+1];
    for(i=0;i<=n;i++)
    {
        primes[i]=1;
    }
    primes[0]=0;primes[1]=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(primes[i]==1)
        {
            for(j=2;i*j<=n;j++)
            {
                primes[i*j]=0;
            }
        }
    }
    for(j=6;j<=n;j++)
    {
        for(i=2;i<=j;i++)
        {
            if(primes[i]==1)
            {
                if(j%i==0)
                {
                    a++;
                }
            }
        }
        if(a==2)
        {
            b++;
        }
        a=0;
    }
    cout<<b;
}
