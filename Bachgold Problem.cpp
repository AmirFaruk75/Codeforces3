#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,b,c,d,e,f,g,h;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(i=0;i<n/2;i++)
        {
            cout<<2<<" ";
        }
    }
    else{
        cout<<n/2<<endl;
        for(i=0;i<n/2-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
}
