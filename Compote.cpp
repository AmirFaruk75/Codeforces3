#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a,b,c,d,e,f,g,h,i,j,n,m;
    cin>>a>>b>>c;
    if((a/1)==0 || (b/2)==0 || (c/4)==0)
    {
        cout<<0;
    }
    else{
        a=a/1;
        b=b/2;
        c=c/4;
        if(a<=b && a<=c)
        {
            cout<<(a*1)+(a*2)+(a*4);
        }
        else if(b<=a && b<=c)
        {
            cout<<(b*1)+(b*2)+(b*4);
        }
        else{
            cout<<(c*1)+(c*2)+(c*4);
        }
    }
}
