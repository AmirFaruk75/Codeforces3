#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[100000],b=0,c=0,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==25)
        {
            b++;
        }
        else if(a[i]==50)
        {
            if(b<=0)
            {
                cout<<"NO";
                return 0;
            }
            c++;
            b--;
        }
        else{
            if(c<=0)
            {
                if(b<3)
                {
                    cout<<"NO";
                    return 0;
                }
                else{
                    b=b-3;
                }
            }
            else{
                if(b<=0)
                {
                    cout<<"NO";
                    return 0;
                }
                else{
                    b--;
                    c--;
                }
            }
        }
    }
    cout<<"YES";
}
