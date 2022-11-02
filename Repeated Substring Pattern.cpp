class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s1 = s;
        sort(s1.begin() , s1.end());
        if(s.size() == 1){
            return false;
        }
        else if(s1[0] == s1[s1.size()-1]){
            return true;
        }else if(s.size() == 3){
           return false;
        }else{
            int x = s.size() / 2;

        for(int j = 2; j<= x ; ++j){
            string m = s.substr(0 , j);
            int c = 0;
            for(int i = 0 ; i<s.size() ; i+=j) {
                 string s2 = s.substr(i , j);
                 if(m != s2){
                     c = 1;
                     break;
                 }       
            }
            
            if(c == 0){
                return true;
            }
     
        }
         return false;

        }

        
    }
};
