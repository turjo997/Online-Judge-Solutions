#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
       cin.ignore();
    while(t--){
            string s ;
            getline(cin,s);

            transform(s.begin(),s.end(),s.begin(),::tolower);

            map<char,int>m;
            map<char,int> :: iterator it;

            int ans=0;
            for(int i=0;i<s.size();++i){
                if(s[i]>='a' && s[i]<='z'){
                    m[s[i]]++;
                    ans=max(ans,m[s[i]]);
                }
            }

            for(it=m.begin();it!=m.end();it++){
                if(it->second==ans){
                    cout<<it->first;
                }
            }
            cout<<endl;
    }

    return 0;
}
