#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    FAST;
        string s,s2;

    while(getline(cin,s) && getline(cin,s2)){
        int n=s.size(),n1=s2.size();

        int c[26]={0};
        int c1[26]={0};
        for(int i=0;i<n;++i){
            c[s[i]-'a']++;
        }

          for(int i=0;i<n1;++i){
            c1[s2[i]-'a']++;
        }

      string ans="";

        for(int i=0;i<26;i++){
            if(c[i]>0 && c1[i]>0){
                    int x=min(c[i],c1[i]);
                    char ch='a';
                    while(x--){
                     ans+=ch+i;
                    }
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}
