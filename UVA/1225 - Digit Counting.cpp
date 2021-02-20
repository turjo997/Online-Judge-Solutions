#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    while(t--){
        int n;  cin>>n;
        map<int,int>m;
        for(int i=1;i<=n;++i){
                int x=i;

                while(x>0){
                        m[x%10]++;
                        x/=10;
                }
        }

        for(int i=0;i<=9;++i){
            if(i==9) cout<<m[i]<<endl;
            else    cout<<m[i]<<" ";
        }

    }

    return 0;
}
