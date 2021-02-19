class Solution {
public:
    string interpret(string s) {
    string ans;
        
   for(int i = 0; i<s.size(); ++i){

       if(s[i]== '(' && s[i+1] == ')' && i+1<s.size()){
         ans+='o';
         ++i;
       }else if(s[i] == '(' || s[i]==')'){
           continue;
       }else{
        ans+=s[i];
       }
   }
        
        return ans;

    }
};
