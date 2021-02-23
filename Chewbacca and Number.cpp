#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int i,j,a,b=0,c=0,e,f,g,h;
    string s,w,t;
    cin>>s;
    a=s.length();
    t=s;

    for(i=0;i<a;i++)
    {
        if(s[i]=='5')
        {
            w+='4';
        }
        else if(s[i]=='6')
        {
            w+='3';
        }
        else if(s[i]=='7')
        {
            w+='2';
        }
        else if(s[i]=='8')
        {
            w+='1';
        }
        else if(s[i]=='9')
        {
            if(i==0)
            {
                if(s[i]=='9')
                {
                    w+=s[i];
                }
            }
            else{
            w+='0';
            }
        }
        else{
            w+=s[i];
        }
    }
    cout<<w;
}
