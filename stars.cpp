#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastread() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll gcd(ll a,ll b)
{
    int n1=a,n2=b,rem=0;
    while(n2!=0)
    {
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    return n1;
}
int main()
{
    fastread();

    ll row=3,col,i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"*"<<endl;
    cout<<"*"<<endl;
    for(i=0;i<6;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(i=0;i<7;i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
