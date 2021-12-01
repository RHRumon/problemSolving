#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastread() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fastread();
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,p,x1,p1,i;
        cin>>x>>p;
        cin>>x1>>p1;

        x*=(pow(10,p));
        x1*=(pow(10,p1));
        if(x>x1)
        {
            cout<<'>'<<endl;
        }
        else if(x<x1)
        {
            cout<<'<'<<endl;
        }
        else
        {
            cout<<'='<<endl;
        }

    }
}
