#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n<=30)
        {
            cout<<"NO"<<endl;
        }
        else{
                if(n==36)
                {
                    cout<<"YES"<<endl;
                    cout<<5<<" "<<6<<" "<<10<<" "<<15<<endl;
                }
                else if(n==40)
                {
                    cout<<"YES"<<endl;
                    cout<<6<<" "<<10<<" "<<15<<" "<<9<<endl;
                }
                else if(n==44)
                {
                    cout<<"YES"<<endl;
                    cout<<6<<" "<<7<<" "<<10<<" "<<21<<endl;
                }
                else{
                cout<<"YES"<<endl;
                cout<<6<<" "<<10<<" "<<14<<" "<<n-(6+10+14)<<endl;
                }
        }
    }
}
