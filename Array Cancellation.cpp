#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[100005],b=0,c,d,e,f,g,h,i,j,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=n-1;i>=0;i--)
        {
            if(a[i]<0)
            {
                b=b+a[i];
            }
            else if(a[i]>0)
            {
                c=a[i]+b;
                if(c>=0)
                {
                    sum=sum+c;
                    b=0;
                }
                else{
                    b=c;
                }
            }
        }
        cout<<sum<<endl;
        b=0;sum=0;
    }
}
