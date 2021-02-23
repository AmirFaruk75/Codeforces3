#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,b=0,c=0,k;
    string s;
    cin>>s;
    a=s.length();
    for(i=0;i<a;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            continue;
        }
        for(j=i+1;j<a;j++)
        {
            if(s[i]==s[j])
            {
                s[j]=s[j]-32;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            c++;
        }
    }
     k=a-c;
    if(k%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}
