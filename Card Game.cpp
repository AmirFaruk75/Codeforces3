#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,k1,k2,a[100000],b[100000],c,d,e,f,g,h;
    cin>>t;
    for(h=0;h<t;h++)
    {
        cin>>n>>k1>>k2;
        for(int i=0;i<k1;i++)
        {
            cin>>a[i];
        }
        sort(a,a+k1);
        for(f=0;f<k2;f++)
        {
            cin>>b[f];
        }
        sort(b,b+k2);
        if(a[k1-1]>b[k2-1])
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
