#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a,b,c,d,e,f,g,h,s;
    cin>>n>>s;
    if(s%n==0)
    {
        cout<<s/n;
    }
    else{
        cout<<(s/n)+1;
    }
}
