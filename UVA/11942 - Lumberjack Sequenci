#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    cout<<"Lumberjacks:"<<endl;
    while(t--){
    int n=10;
    vector<int> v(n);

    for(int i=0;i<n;++i)cin>>v[i];


    int c=0,c1=0;
    for(int i=0;i<n-1;i++){
        if(v[i]<=v[i+1]){
            c++;
        }

        if(v[i]>=v[i+1]){
            c1++;
        }
    }


    if(c==9 || c1==9) cout<<"Ordered"<<endl;
    else              cout<<"Unordered"<<endl;
   // cout<<c<<" "<<c1<<endl;




    }


    return 0;
}

