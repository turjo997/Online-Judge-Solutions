#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    cin.ignore();
    while(t--){

        string s1,s;

        getline(cin,s1);

        s="";

        if(s1.size()==0){
            cout<<"Yes"<<endl;
            continue;
        }
        for(int i=0;i<s1.size();++i){
            if(s1[i]!=' '){
                s+=s1[i];
            }
        }
        stack<char> st;
        int ans=0;

        for(int i=0;i<s.size();++i){
                char ch;
                if(s[i]=='(' || s[i]=='['){
                  ans++;
                  st.push(s[i]);
                }else{
                  if(!st.empty()){
                    ch = st.top();

                  if((ch == '[' && s[i] == ']' ) ||  ( ch == '(' && s[i] == ')' )){
                    ans--;
                    st.pop();
                  }

                  }

                  else{
                  ans=-1;
                  break;

                  }


                }

        }

        if(ans==0)cout<<"Yes"<<endl;
        else  cout<<"No"<<endl;



    }


    return 0;
}

