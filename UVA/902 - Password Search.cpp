#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    string s;

    while(cin >> n >> s){

        map<string,int> m;
        map<string,int> :: iterator it;

        int mx = 0;
        for(int i = 0; i<s.size(); ++i){
              string r = s.substr(i, n);

              if(r.size() == n){
               m[r]++;
              }
              mx = max(mx , m[r]);
        }
        for(it = m.begin() ; it!=m.end() ; ++it){
            if(it->second == mx){
                cout<<it->first<<endl;
                break;
            }
        }
    }


    return 0;
}
