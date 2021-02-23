#include<bits/stdc++.h>
using namespace std;
struct pack
{
    int a;
    int b;

};
int main()
{
    ios_base::sync_with_stdio(false);
    struct pack x[100000],temp;
    int t,i,j,c=0,d,e,f,g,h,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x[i].a>>x[i].b;

        }
                for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(x[i].a>x[j].a)
                {
                    temp=x[i];
                    x[i]=x[j];
                    x[j]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<x[i].a<<" "<<x[i].b<<endl;
        }

    }
}
