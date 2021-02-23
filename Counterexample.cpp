#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int l,r,i,j,a,b,c,d,e,f,g,h;
    cin>>l>>r;
    if(r-l==0 || r-l==1 )
    {
        cout<<-1<<endl;
    }
    else if(r-l==2 && l%2!=0)
    {
        cout<<-1<<endl;
    }
    else{
        if(l%2==0)
        {
            cout<<l<<" "<<l+1<<" "<<l+2;
        }
        else{
            cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
        }
    }
}
