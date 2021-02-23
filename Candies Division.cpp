#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,k,a,b,c,d,e,f,g,h,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        if(n<k)
        {
            f=k/2;
            if(f<n)
            {
                cout<<f<<endl;
            }
            else{
                cout<<n<<endl;
            }
        }
        else{
        if(n%k==0)
        {
            cout<<n<<endl;
        }
        else{
            b=(n/k)+1;
            c=((k/2)*b);
            d=k-(k/2);
            e=d*(b-1);
            if(c+e>n)
            {
                cout<<n<<endl;
            }
            else{
                cout<<c+e<<endl;
            }

        }
        }
    }
}
