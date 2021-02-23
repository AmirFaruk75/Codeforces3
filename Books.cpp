#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a[100000],i,j,b,c=0,d,e,f,g,h,begin,end,mid,sum=0;
    cin>>n>>t;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    begin=1;
    end=n;
    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
        a[i]=sum;
        if(i==n)
        {
            i=1;
            e=0;
        }
        else{
            continue;
        }
        while(begin<=end)
        {
            mid=(begin+end)/2;
            if(t==a[mid])
            {
                if(mid>e)
                {
                    e=mid;
                }
            }
            else if(t>a[mid])
            {
                begin=mid+1;
            }
            else if(t<a[mid])
            {
                end=mid-1;
                if(mid-1>e)
                {
                    e=mid-1;
                }
            }
        }
        sum=0;
    }
}
