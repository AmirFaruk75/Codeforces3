#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,i,j,a=0,b,c,d,e,f,g,h;
    cin>>n>>m;
    for(i=0;;i++)
    {
        if(n==1 && m==1 || n==0 || m==0)
        {
            break;
        }
        if(n>=m)
        {
            n=n-2;
            m=m-1;
            a++;
        }
        else{
            m=m-2;
            n=n-1;
            a++;
        }
    }
    cout<<a;
}
