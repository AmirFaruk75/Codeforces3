#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,w,n,i,j,a,b;
    cin>>y>>w;
    if(y>=w)
    {
        a=7-y;
    }
    else{
        a=7-w;
    }
    if(a==6)
    {
        cout<<1<<"/"<<1;
    }
    else if(a==5)
    {
        cout<<5<<"/"<<6;
    }
    else if(a==4)
    {
        cout<<2<<"/"<<3;
    }
    else if(a==3)
    {
        cout<<1<<"/"<<2;
    }
    else if(a==2)
    {
        cout<<1<<"/"<<3;
    }
    else if(a==1)
    {
        cout<<1<<"/"<<6;
    }
}
