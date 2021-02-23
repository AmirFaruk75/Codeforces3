#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[100000],b=0,c=0,d=0,e=0,f,g,h,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                b++;
            }
            else{
                c++;
            }
        }
        if(b%2==0)
        {
            if(b>=c)
            {
                cout<<b<<endl;
                for(i=0;i<n;i++)
                {
                    if(a[i]==0)
                    {
                        cout<<0<<" ";
                    }
                }
                cout<<endl;
            }
            else{
                    cout<<c<<endl;
                for(i=0;i<n;i++)
                {
                    if(a[i]==1)
                    {
                        cout<<1<<" ";
                    }
                }
                cout<<endl;
            }
        }
        else{
            if(b>=c)
            {
                cout<<b<<endl;
                for(i=0;i<n;i++)
                {
                    if(a[i]==0)
                    {
                        cout<<0<<" ";
                    }
                }
                cout<<endl;
            }
            else{
                cout<<c-1<<endl;
                for(i=0;i<n;i++)
                {
                    if(a[i]==1 && e<c-1)
                    {
                        cout<<1<<" ";
                        e++;
                    }
                }
                cout<<endl;
            }
        }
        b=0;c=0;d=0;e=0;
    }
}
