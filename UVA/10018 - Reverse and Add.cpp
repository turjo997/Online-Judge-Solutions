#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

     int t; cin>> t;

     while(t--){
            ll n,y,y1;  cin>>n;

            stringstream ss; ss<<n;

            string s=ss.str();

            ll x=0; y1=n;
            int i=s.size()-1;
            y=0;
            int cnt=0,siz=s.size(),cnt1=0;
           while(n>0){
              cnt++;
              x=n%10;
              y+=(x*pow(10.0,i));
              n/=10;
              i--;
              if(cnt==siz && abs(y-y1)==0){
                break;
              }
              else if(cnt==siz &&  abs(y-y1)!=0){
                cnt1++;
                n=y+y1;
                stringstream s2; s2<<n;
                string s1=s2.str();
                i=s1.size()-1;
                siz=s1.size(); cnt=0; y=0; x=0; y1=n;
              }
           }

           cout<<cnt1<<" "<<y<<endl;
     }







  return 0;
}
