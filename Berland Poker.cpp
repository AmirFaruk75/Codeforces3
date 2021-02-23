#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,m,k,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m>>k;
        a=n/k;
        if(a>=m)
        {
            cout<<m<<endl;
            continue;
        }
        else{
            b=m-a;
            c=k-1;
            if(b%c==0)
            {
                d=b/c;
                e=a-d;
                cout<<e<<endl;
            }
            else{
                d=(b/c)+1;
                e=a-d;
                cout<<e<<endl;
            }
        }
    }
}
