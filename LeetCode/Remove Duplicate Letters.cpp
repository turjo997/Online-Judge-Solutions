class Solution {
public:
    string removeDuplicateLetters(string s) {
    int n = s.size();

    stack<char> st;
    map<char,int> m;
    map<char,int> ::iterator it;


    for(int i = 0; i<n ; ++i){
        m[s[i]]++;
    }
    int f[26] = {0};


     for(int i = 0 ; i<n ;++i){

            if(f[s[i] - 'a'] == 1){
                m[s[i]]--;
                continue;
            }

            while(!st.empty() && (st.top() > s[i]) && m[st.top()] > 1){
                m[st.top()]--;
                f[st.top() - 'a'] = 0;
                st.pop();
             }
            st.push(s[i]);
            f[s[i] -'a'] = 1;

     }
     string ans;

       while(!st.empty()){
         char c = st.top();
         ans+=c;
         st.pop();
       }

         string rev = string(ans.rbegin(),ans.rend());

        return rev;
    }
};
