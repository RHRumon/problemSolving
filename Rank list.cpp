#include<bits/stdc++.h>
#define ll long long
#define fastread() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool compare(const pair<ll,ll>&p1, const pair<ll,ll>&p2)
{
    if(p1.first>p2.first)
    {
        return 1;
    }
    else if(p1.first==p2.first)
    {
        return (p1.second<p2.second);
    }
    return 0;
}

int main()
{
    ll n,k;
    cin>>n>>k;
    ll i;
    vector<pair<ll,ll>>v(n);
    for(i=1; i<=n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end(),compare);
    for(auto u : v)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }
}
