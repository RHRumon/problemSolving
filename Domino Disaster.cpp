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

        int i,temp=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='D')
            {
                cout<<"U";
            }
            else if(s[i]=='U')
            {
                cout<<"D";
            }
            else if(s[i]!='U' || s[i]!='D')
            {
                cout<<s[i];
            }
        }
    }
    return 0;
}
