#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastread() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fastread();
    ll n;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>n;
    vector<pair<ll,ll>>v(2*n);

    vector<ll>v2(2*n);
    ll i,j;
    for(i=0;i<2*n;i++)
    {
        cin>>v2[i];
    }

    for(i=0;i<2*n;i++)
    {
         v.push_back(make_pair(v2[i],i+1));

    }
    sort(v.begin(),v.end());

    for(i=0;i<2*n;i+=2)
    {
        if(v[i].first != v[i+1].first)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    for(i=0;i<2*n;i+=2)
    {
        cout<<v[i].second<<" "<<v[i+1].second<<endl;
    }

}
