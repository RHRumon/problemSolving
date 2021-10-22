#include<bits/stdc++.h>
using namespace std;
vector<int>vasia(100001);
vector<int>patia(100001);
int main()
{

    int n,m;
    cin>>n;
    vector<int>v(n+1);
    int i,j;
    for(i=1,j=n;i<=n,j>=1;i++,j--)
    {
        cin>>v[i];
        vasia[v[i]] = i;
        patia[v[i]] = j;
    }


    /*for(i=1;i<=n;i++)
    {
        cout<<vasia[i]<<" ";
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<patia[i]<<" ";
    }
    cout<<endl;*/

    int vas_sum=0,pat_sum=0;
    cin>>m;
    for(i=1;i<=m;i++)
    {
        int val;
        cin>>val;
        vas_sum+=vasia[val];
        pat_sum+=patia[val];
    }
    cout<<vas_sum<<" "<<pat_sum<<endl;

}
