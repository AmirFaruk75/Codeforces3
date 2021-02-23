#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a=0,b,c,d,e,f,g,h;
    string s;
    cin>>n>>s;
    sort(s.begin(),s.end());
    if(n>26)
    {
        cout<<-1;
        return 0;
    }

    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            a++;
        }
    }
   cout<<a;
}
