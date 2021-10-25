#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll H,W;
    cin>>H>>W;
    ll arr[H+5][W+5],i,j;
    for(i=0;i<H;i++)
    {
        for(j=0;j<W;j++)
        {
            cin>>arr[i][j];
        }
    }
    ll i1,j1;
    for(i=0;i<H;i++)
    {
        for(i1=i+1;i<H;i++)
        {
            for(j=0;j<W;j++)
            {
                for(j1=j+1;j<W;j++)
                {
                    if(arr[i][j]+arr[i1][j1]>arr[i1][j]+arr[i][j1])
                    {
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
