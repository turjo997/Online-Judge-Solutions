#include<bits/stdc++.h>
using namespace std;

string s1="";
string ans2="";

void fun(string ans){
       stack<char>st;
       s1.clear();
       ans2.clear();
        for(int i=0;i<ans.size();i++){
            char ch;
            if(st.empty()){
              ch='.';
            }else{
             ch=st.top();
            }
            if(ch==ans[i]){
                st.pop();
                st.push(ans[i]);
            }else{
            st.push(ans[i]);
            }
        }
        while(!st.empty()){
            char ch=st.top();
            s1+=ch;
            st.pop();
        }
        reverse(s1.begin(),s1.end());


        for(int i=0;i<s1.size();++i){
                if(s1[i]!='9')ans2+=s1[i];
        }

}

int main()
{
     string s;

      while(getline(cin,s)){

      int n=s.size();
      string ans1="";

        for(int i=0;i<n;++i){
            if(s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'
               ||   s[i]=='H'|| s[i]=='W' || s[i]=='Y'){
                ans1+='9';
            }
            if(s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V') ans1+='1';
            if(s[i]=='C' || s[i]=='G' || s[i]=='J' || s[i]=='K' ||
               s[i]=='Q' || s[i]=='X' || s[i]=='S' || s[i]=='Z'
               ) ans1+='2';
            if(s[i]=='L') ans1+='4';
            if(s[i]=='D' || s[i]=='T' ) ans1+='3';
            if(s[i]=='M' || s[i]=='N' ) ans1+='5';
            if(s[i]=='R') ans1+='6';
        }


          fun(ans1);
          cout<<ans2<<endl;

     }


    return 0;
}
