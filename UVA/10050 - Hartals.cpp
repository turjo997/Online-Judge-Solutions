#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        set<int> s;
        set<int> :: iterator it;

        while(q--){
                int a;  cin>> a;
                int c=a;

                while(a<=n){
                          int x=a/7;
                          int y= (x+1) * 7;
                          y--;
                          if(a!=y && a%7!=0){
                            s.insert(a);
                          }
                          a+=c;
                       }
                  }
                   cout<<s.size()<<endl;
                   s.clear();
        }

    return 0;
}
