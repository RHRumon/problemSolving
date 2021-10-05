#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastread() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fastread();
    ll i,n;
    cin>>n;
    ll arr[n];

    vector<pair<ll,ll>>v(n);

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        v.push_back( make_pair(arr[i],i));
    }
    sort(v.begin(),v.end());

    for(i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
