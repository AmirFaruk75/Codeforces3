#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,a=0,b=0,c,d,e,f,g,h;
    string s;
    cin>>t;
    for(h=0;h<t;h++)
    {
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='A')
            {
                for(j=i+1;j<n+1;j++)
                {
                    if(s[j]=='P')
                    {
                        a++;
                    }
                    else{
                        if(a>b)
                        {
                            b=a;
                        }
                        a=0;
                    }
                }
            }
        }
        cout<<b<<endl;
        b=0;a=0;
    }
}
