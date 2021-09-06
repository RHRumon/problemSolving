#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='L' || s[i]=='R')
            {
                cout<<s[i];
            }
            else if(s[i]=='U')
            {
                cout<<'D';
            }
            else
            {
                cout<<'U';
            }

        }

    }
    return 0;
}
