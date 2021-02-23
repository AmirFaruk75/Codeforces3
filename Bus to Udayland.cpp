#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a=0,b,d;
    char c[10000];
    cin>>n;
    for(i=1;i<=n*5;i++)
    {
        cin>>c[i];
    }
    for(i=1;i<=n*5;i++)
    {
        if(i%5==0)
        {
            continue;
        }
        if(c[i]=='O' && c[i+1]=='O')
        {
            a=1;
            cout<<"YES"<<endl;
            c[i]='+';
            c[i+1]='+';
            break;
        }
    }
    if(a==0)
    {
        cout<<"NO";
        return 0;
    }
    else{
        for(i=1;i<=n*5;i++)
        {
            cout<<c[i];
            if(i%5==0)
            {
                cout<<endl;
            }
        }
    }
}
