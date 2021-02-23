#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i,j,a,b,c,d,e,f,g,h;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>n;
        if(n==2)
        {
            cout<<n<<endl;
        }
        else if(n%2==0)
        {
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}
