class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        

       //sort(s.begin() , s.end());
        string ans = s[0];

        for(int i = 1 ; i<s.size() ; ++i){
           for(int j = 0 ; j < ans.size() ; ++j){
              if(s[i][j] == ans[j]){
                continue;
              }else{
                  ans = ans.substr(0 , j);
                  //ans[j] = '\0';
                  break;
              }
           }
        }

           return ans;
    };
};
