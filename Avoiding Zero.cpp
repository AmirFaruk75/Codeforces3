#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[10000],sum=0,cum=0,i,j,b,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
            {
                sum=sum+a[i];
            }
            else{
                cum=cum+a[i];
            }
        }
        cum=cum*(-1);
        if(sum==cum)
        {
            cout<<"NO"<<endl;
        }
        else{
            if(cum>sum)
            {
                cout<<"YES"<<endl;
                sort(a,a+n);
                for(i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"YES"<<endl;
                sort(a,a+n, greater<int>());
                for(i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
        }
        sum=0;cum=0;
    }
}
