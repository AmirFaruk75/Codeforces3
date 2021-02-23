#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,i,j,a,b=0,c=0,d,e,f,g,h;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;
        a=s.length();
        for(j=0;j<a;j++)
        {
            if(s[j]=='0')
            {
                b++;
            }
            else{
                c++;
            }
        }
        if(b<=c)
        {
            if(b%2!=0)
            {
                cout<<"DA"<<"\n";
            }
            else{
                cout<<"NET"<<"\n";
            }
        }
        else{
            if(c%2!=0)
            {
                cout<<"DA"<<"\n";
            }
            else{
                cout<<"NET"<<"\n";
            }
        }
        b=0;c=0;
    }
}
