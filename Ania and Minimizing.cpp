#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,k,i,j,a,b,c,d,e,f,g,h;
    string s,w;
    cin>>n>>k;
    cin>>s;
    if(n==1 && k==1)
    {
        cout<<0;
        return 0;
    }
    else if(n==1 && k==0)
    {
        cout<<s;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(i==0 && k>0)
        {
            if(s[i]!='1')
            {
                w+='1';
                k--;
            }
            else{
                w+=s[i];
            }
        }
        else if(k>0)
        {
            if(s[i]!='0')
            {
                w+='0';
                k--;
            }
            else{
                w+=s[i];
            }
        }
        else{
            w+=s[i];
        }
    }
    cout<<w;
}
