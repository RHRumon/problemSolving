#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n+5],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int time=0;
    for(i=0;i<n;i++)
    {
        time = time + arr[i]*x;
        if(x>0)
        {
            x--;
            if(x==0)
            {
                x++;
            }
        }
    }
    cout<<time<<endl;
}
