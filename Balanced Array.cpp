#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k,a,b,c=0,d=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if((n/2)%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else{
                cout<<"YES"<<endl;
            for(j=1;j<=n/2;j++)
            {
                cout<<j*2<<" ";
                c=c+(j*2);
            }
            for(k=1;k<n/2;k++)
            {
                cout<<(k*1)+(k-1)<<" ";
                d=d+(k*1)+(k-1);
                if(k==(n/2)-1)
                {
                    cout<<c-d<<endl;
                    c=0;
                    d=0;
                }
            }
        }
    }
}

