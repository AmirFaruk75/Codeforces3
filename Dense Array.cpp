#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[10000],b=0,c,d,e,f,g,h,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            if((a[i]>a[i+1]) || (a[i]<a[i+1]))
            {
                if(a[i]>a[i+1])
                {
                    c=a[i]-a[i+1];
                    if(c>a[i+1])
                    {
                        d=a[i+1];
                        for(j=0;;j++)
                        {
                            d=d*2;
                            b++;
                            if(d>=(a[i]-d))
                            {
                                break;
                            }
                        }
                    }
                }
                else{
                    c=a[i+1]-a[i];
                    if(c>a[i])
                    {
                        d=a[i];
                        for(j=0;;j++)
                        {
                            d=d*2;
                            b++;
                            if(d>=(a[i+1]-d))
                            {
                                break;
                            }
                        }
                    }
                }

            }
        }
        cout<<b<<endl;
        b=0;
    }
}
