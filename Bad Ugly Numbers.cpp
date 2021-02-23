#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t,n,i,j,a,b,d,e,f,g,h;
    char c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n==1)
        {
            cout<<-1<<endl;
        }
        else if(n==2)
        {
            cout<<23<<endl;
        }
        else{
            for(j=0;j<2;j++)
            {
                c='2';
                cout<<c;
            }
            for(j=2;j<n;j++)
            {
                c='3';
                cout<<c;
            }
            cout<<endl;
        }
    }
}
