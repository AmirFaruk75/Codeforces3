#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int p,n,i,j,a,b,c,d,e,f,g,h;
    string s,w,t;
    cin>>p;
    while(p--)
    {
        cin>>s;
        a=s.length();
        for(i=0;i<a;i++)
        {
            if(s[i]==s[i+1])
            {
                i=i+1;
            }
            else{
                w+=s[i];
            }
        }
        sort(w.begin(),w.end());
        b=w.length();
        for(i=0;i<b;i++)
        {
            if(w[i]<'a')
            {
                continue;
            }
            else{
                t+=w[i];
                for(j=i+1;j<b;j++)
                {
                    if(w[i]==w[j])
                    {
                        w[j]=w[j]-35;
                    }
                }
            }
        }
        cout<<t;
        t.clear();
        w.clear();
        cout<<endl;
    }
}
