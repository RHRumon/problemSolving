#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f;

    cin>>a>>b>>c; ///ekhane prothom equation er shohog gula input nichi
    cin>>d>>e>>f;  ///ekhane second equation er shohog gula input nichi

    double Dx,Dy,D;
    Dx = (c*e) - (b*f);
    Dy = (a*f) - (c*d);
    D  = (a*e) - (d*b);

    double v1,v2; /// node voltages
    v1 = Dx/D;
    v2 = Dy/D;

    cout<<v1<<" "<<v2;
}
