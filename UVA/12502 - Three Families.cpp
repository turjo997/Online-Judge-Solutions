#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--){
    double a,b,c;
    cin>>a>>b>>c;


    double y = a+b;
    double x = y/3;
    a-=x;
    b-=x;
    double z= a+b; //2+1


    c/=z;

    cout<<c*a<<endl;


    }


    return 0;
}
