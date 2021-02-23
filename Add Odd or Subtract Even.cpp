#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,e;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else if(a<b)
        {
            c=b-a;
            if(c%2==0)
            {
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            d=b-a;
            if(d%2==0)
            {
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    }
}
