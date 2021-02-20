#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
        FAST;

        int t;
        cin>>t;

        while(t--){

            int n,k;  cin>>n>>k;

            vector<int> v(n);

            for(int i=0;i<n;i++)cin>>v[i];

            int z=k-1,ev=0,od=0;
            for(int i=0;i<n;i++){
                if(v[i]%2==0){
                  ev++;
                }else{
                od++;
                }
            }

            if(od==0){
                cout<<"No"<<endl; continue;
            }

            if(ev==0){

                   if(k%2!=0 && od>=k){
                    cout<<"Yes"<<endl;
                   }else{
                     cout<<"No"<<endl;
                    }
                    continue;
            }

            k--;

            if(ev>=k && od>=1 && od%2!=0){
                cout<<"Yes"<<endl;
                continue;
            }

            cout<<"No"<<endl;


        }

    

    return 0;
}
