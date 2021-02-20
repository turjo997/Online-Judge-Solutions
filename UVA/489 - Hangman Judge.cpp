#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;

    while(cin>>t && t>0){
            string s,s2;
            cin>>s>>s2;

            int f,c=0,k=7;
            int req=s.size();

            for(int i=0;i<s2.size() && req-c>=0 && k;++i){
                    f=0;
                for(int j=0;j<s.size();++j){
                    if(s2[i]==s[j]){
                        s[j]='*';
                        f=1;
                        c++;
                    }
                }
                if(!f){
                    k--;
                }
            }


             if(c==req) {
                cout<<"Round "<<t<<endl;
                cout<<"You win."<<endl;
                continue;
             }

             if(k==0){
                cout<<"Round "<<t<<endl;
                cout<<"You lose."<<endl;
                continue;
             }

               cout<<"Round "<<t<<endl;
               cout<<"You chickened out."<<endl;

               //cout<<k<<endl;

    }

    return 0;
}

