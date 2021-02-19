#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    while(cin >>n){

        if(n == 0)break;
        else{

         map<vector<int> , int> m;
         map<vector<int> , int> :: iterator it;

         int mx = 0;

         for(int i = 0 ; i<n ; ++i){
              vector<int> v;
              for(int j = 0 ; j< 5 ; ++j){
                int x ; cin >> x ; v.push_back(x);
              }
              sort(v.begin() , v.end());
              m[v]++;
              mx = max(mx , m[v]);
         }

         int ans = 0;
         for(it = m.begin() ; it!=m.end() ; ++it){
            if(it->second  == mx) ans+=mx;
         }

         cout<<ans<<endl;

        }

    }


    return 0;
}
