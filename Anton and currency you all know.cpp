#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a,b,d=0,e=0,f=0,g,h,i;
    string s;
    char c,w;
    cin>>s;
    a=s.length();
    for(i=0;i<a;i++)
    {
        if(s[i]=='0' || s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8')
        {
            e=1;
            break;
        }
    }
    if(e==0)
    {
        cout<<-1<<endl;
    }
    else{
        for(i=0;i<a;i++)
        {
            if(s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='0')
            {
                if(s[a-1]>s[i])
                {
                    c=s[i];
                    b=i;
                    d=1;
                    break;
                }
            }
        }
        if(d==1)
        {
            for(i=0;i<a-1;i++)
            {
                if(b==i)
                {
                    cout<<s[a-1];
                }
                else{
                    cout<<s[i];
                }
            }
            cout<<c;
        }
        else{
            for(i=a-1;i>=0;i--)
            {
                if(s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='0')
                {
                    w=s[i];
                    f++;
                    break;
                }
                else{
                    f++;
                }
            }
            g=a-f;
            for(i=0;i<a-1;i++)
            {
                if(g==i)
                {
                    cout<<s[a-1];
                }
                else{
                    cout<<s[i];
                }
            }
            cout<<w;
        }
    }
}
