#include<bits/stdc++.h>
using namespace std;
char c[1000][1000];
int main()
{
    ios_base::sync_with_stdio(false);
    int i,j,a=0,b=0,d,e,f,g,h;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cin>>c[i][j];
            if(c[i][j]=='Q')
            {
                a=a+9;
            }
            else if(c[i][j]=='q')
            {
                b=b+9;
            }
            else if(c[i][j]=='R')
            {
                a=a+5;
            }
            else if(c[i][j]=='r')
            {
                b=b+5;
            }else if(c[i][j]=='B')
            {
                a=a+3;
            }else if(c[i][j]=='b')
            {
                b=b+3;
            }else if(c[i][j]=='N')
            {
                a=a+3;
            }else if(c[i][j]=='n')
            {
                b=b+3;
            }else if(c[i][j]=='P')
            {
                a=a+1;
            }else if(c[i][j]=='p')
            {
                b=b+1;
            }
        }
    }
    if(a>b)
    {
        cout<<"White";
    }
    else if(b>a)
    {
        cout<<"Black";
    }
    else{
        cout<<"Draw";
    }

}
