#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,x[10000],b=0,c=0,i,j,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]%2==0)
        {
            b++;
        }
        else{
            c++;
        }
    }
    if(b>=c)
    {
        cout<<c;
    }
    else{
        cout<<b;
    }
}
