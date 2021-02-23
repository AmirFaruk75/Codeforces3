#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int a,b,c,d,e,f,g,h,i,j;
    cin>>a>>b>>c;
    d=a+c;
    e=b+c;
    if(d==e)
    {
        cout<<d+e;
    }
    else if(d<e)
    {
        cout<<(2*d)+1;
    }
    else{
        cout<<(2*e)+1;
    }
}
