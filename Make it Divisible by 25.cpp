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
        string s;
        cin>>s;
        ll n =s.size();
        string check[] = {"25","50","75","00"};
        ll i,j,k;
        ll res=-1;
        for(i=0;i<4;i++)
        {
            ll ans=1e9;
            ll p1=-1,p2=-1;
            string c = check[i];
            for(j=0;j<s.size();j++)
            {
                if(s[j]==c[0])
                {
                    p1 = j;
                    for(k=p1+1;k<s.size();k++)
                    {
                        if(s[k]==c[1])
                        {
                            p2 = k;

                            res = n-p1-2;
                            break;
                        }
                    }
                }
            }
        }
        cout<<res<<endl;
    }
}
