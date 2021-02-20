#include<bits/stdc++.h>
using namespace std;


int main()
{
    int k;

    while(cin>>k){
            if(k==0) break;
            string s;  cin>>s;
            int n=s.size();
            k=n/k;

            for(int i=0;i<n;i+=k){
                string s1=s.substr(i,k);reverse(s1.begin(),s1.end());
                cout<<s1;
            }
            cout<<endl;

    }


    return 0;
}
