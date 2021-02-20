#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--){
//cout<<endl;

       int amp,fr;
       cin>>amp;
       cin>>fr;


       for (int i = 0;i<fr; i++){
       for(int i=1;i<=amp;++i){

           for(int j=1;j<=i;++j){

              cout<<i;
           }
           cout<<endl;
       }


       for(int i=amp-1;i>=1;--i){

          for(int j=i;j>=1;--j){
            cout<<i;
          }
          cout<<endl;
       }
       if (i != fr - 1)
            cout<<endl;
       }

       if(t)
       cout<<endl;

    }

    return 0;
}
