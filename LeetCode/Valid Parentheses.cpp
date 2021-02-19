class Solution {
public:
    bool isValid(string s) {
              stack<char> st;
        int ans=0;

        for(int i=0;i<s.size();++i){
                char ch;
                if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                  ans++;
                  st.push(s[i]);
                }else{
                  if(!st.empty()){
                    ch = st.top();

                  if((ch == '[' && s[i] == ']' ) ||  ( ch == '(' && s[i] == ')' )
                     ||  ( ch == '{' && s[i] == '}' )
                     ){
                    ans--;
                    st.pop();
                  }
                      
                       else{
                  ans=-1;
                  break;

                  }
                  }
                    
                    else{
                    ans = -2;
                    break;

                  }
                 
                }
        }

        if(ans==0) return true;
        else       return false;




    }
};
