#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[100000],b,c0=0,c1=0,c2=0,d,e,f,g,h,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        b=n/3;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%3==0)
            {
                c0++;
            }
            else if(a[i]%3==1)
            {
                c1++;
            }
            else{
                c2++;
            }
        }
        d=b-c0;
        e=b-c1;
        f=b-c2;
        if(d==e && e==f)
        {
            cout<<0<<endl;
            c0=0;c1=0;c2=0;
            continue;
        }
        else if(d>0)
        {
            if(e<0 && ((f>0)||(f==0)))
            {
                g=(2*d)+f;
            }
            else if(f<0 && ((e>0)||(e==0)))
            {
                g=d+(2*e);
            }
            else
            {
                e=e*(-1);
                f=f*(-1);
                g=(2*e)+f;
            }
        }
        else if(e>0)
        {
            if(d<0 && ((f>0)||(f==0)))
            {
                g=e+(2*f);
            }
            else if(f<0 && ((d>0)||(d==0)))
            {
                g=d+(2*e);
            }
            else
            {
                d=d*(-1);
                f=f*(-1);
                g=d+(2*f);
            }
        }
        else if(f>0)
        {
            if(d<0 && ((e>0)||(e==0)))
            {
                g=e+(2*f);
            }
            else if(e<0 && ((d>0)||(d==0)))
            {
                g=f+(2*d);
            }
            else
            {
                d=d*(-1);
                e=e*(-1);
                g=(2*d)+e;
            }
        }
        cout<<g<<endl;
        c0=0;c1=0;c2=0;
    }
}
