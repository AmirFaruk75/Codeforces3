#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a=0,b=0,c,d,e,f,g,h;
    string s,t,w;
    cin>>n;
    cin>>s;
    if(n%2!=0)
    {
        for(i=n-2;i>0;i=i-2)
        {
            cout<<s[i];
        }
        for(i=0;i<n;i=i+2)
        {
            cout<<s[i];
        }
    }
    else{
        for(i=n-2;i>=0;i=i-2)
        {
            cout<<s[i];
        }
        for(i=1;i<n;i=i+2)
        {
            cout<<s[i];
        }
    }

}


