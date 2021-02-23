#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int i,j,n,a,b,c=0,d,e,f,g,h;
    string s;
    cin>>s;
    a=s.length();
    for(i=1;i<a;i++)
    {
        if(s[i]=='1')
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        c=((a-1)/2)+1;
        cout<<c;
    }
    else{
        if((a-1)%2==0)
        {
            cout<<(a-1)/2;
        }
        else{
            cout<<((a-1)/2)+1;
        }

    }
}
