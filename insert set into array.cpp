#include<bits/stdc++.h>
using namespace std;

set<int> setinsert(int arr[],int n)
{
    for(auto u:arr)
    {
        s.insert(u);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    set<int>s = setinsert(arr,n);


}
