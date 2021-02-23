#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int i,n,j,a,b,c,d,e,f,g,h;
    string s;
    cin>>s;
    a=s.length();
    for(i=0;i<a;i++)
    {
        if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<1;
            i=i+1;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            cout<<2;
            i=i+1;
        }
        else{
            cout<<0;
        }
    }
}
