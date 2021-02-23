#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a,b,c=0,d=1,e,f,g,h,i,j;
    string s,t;
    cin>>s>>t;
    a=s.length();
    b=t.length();
    if(s[a-1]!=t[b-1])
    {
        cout<<a+b<<endl;
    }
    else{
        if(b<=a)
        {
            for(i=b-1;i>=0;i--)
            {
                if(s[a-d]!=t[i])
                {
                    c=i+1;
                    break;
                }
                d++;
            }
            e=b-c;
            f=a-e;
            cout<<c+f;
        }
        else{
            for(i=a-1;i>=0;i--)
            {
                if(t[b-d]!=s[i])
                {
                    c=i+1;
                    break;
                }
                d++;
            }
            e=a-c;
            f=b-e;
            cout<<f+c;
        }
    }
}
