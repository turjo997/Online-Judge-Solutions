#include<bits/stdc++.h>
using namespace std;


int main()
{
      int n , m;

      while(cin >> n >> m){

         if(n == 0 && m ==0) break;

         else{
            vector<int> a  ,b;

            for(int i = 0 ; i<n ; ++i){
                int x ; cin >> x ; a.push_back(x);
            }

            for(int i = 0 ; i<m ; ++i){
                int x ; cin >> x ; b.push_back(x);
            }

            vector<int> v(n + m);
            vector<int>::iterator it;

            it = set_difference(a.begin(), a .end(), b.begin(), b .end(), v.begin());

            v.resize(it - v.begin());

            cout<<n-v.size()<<endl;

         }

      }


    return 0;
}
