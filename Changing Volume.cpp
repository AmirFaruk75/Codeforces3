#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,a,b,c,d,e,f,g,h,i,j;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>=b)
        {
            c=a-b;
        }
        else{
            c=b-a;
        }
        d=c/5;
        e=c%5;
        f=e/2;
        g=e%2;
        cout<<d+f+g<<endl;
    }
}
