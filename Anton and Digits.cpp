#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6,i,j,a,b,c,d,e,f,g,h;
    cin>>k2>>k3>>k5>>k6;

    if(k2<=k5 && k2<=k6)
    {
        b=k2;
        k2=k2-k2;
        k5=k5-k2;
        k6=k6-k2;
    }
    else if(k5<=k2 && k5<=k6)
    {
        b=k5;
        k2=k2-k5;
        k5=k5-k5;
        k6=k6-k5;
    }
    else{
        b=k6;
        k2=k2-k6;
        k5=k5-k6;
        k6=k6-k6;
    }
    if(k2>=k3)
    {
        a=k3;
    }
    else{
        a=k2;
    }
    cout<<(32*a)+(256*b);
}
