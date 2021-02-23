#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a,b,c=0,d,e,f,g,h,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=n%10;
        b=(a-1)*10;
        for(i=0;;i++)
        {
            n=n/10;
            c++;
            if(n==0)
            {
                break;
            }
        }
        if(c==1)
        {
            cout<<b+1<<endl;
        }
        else if(c==2)
        {
            cout<<b+3<<endl;
        }
        else if(c==3)
        {
            cout<<b+6<<endl;
        }
        else{
            cout<<b+10<<endl;
        }
        c=0;
    }
}
