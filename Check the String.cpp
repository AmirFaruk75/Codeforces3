#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,c=0,b=0,d=0,e=0,f=0,g=0,h;
    string s,t;
    cin>>s;
    a=s.length();
    for(i=0;i<a;i++)
    {
        if(s[i]=='a')
        {
            e++;
        }
        else if(s[i]=='b')
        {
            f++;
        }
        else{
            g++;
        }
    }
    if(e==0 || f==0 || g==0)
    {
        cout<<"NO";
        return 0;
    }
    t=s;
    sort(t.begin(),t.end());
    if(s!=t)
    {
        cout<<"NO";
        return 0;
    }
    else{
        for(i=0;i<a;i++)
        {
            if(s[i]=='a')
            {
                b++;
            }
            else if(s[i]=='b')
            {
                c++;
            }
            else{
                d++;
            }
        }
        if(b==d || c==d)
        {
            cout<<"YES";
            return 0;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
}
