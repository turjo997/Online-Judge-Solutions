class Solution {
public:
    int strStr(string a, string b) {

        if(a.size() < b.size()){
            return -1;
         }
         else{
            int x = b.size();
            int mn = INT_MAX;
            for(int i = 0 ; i<a.size() ; ++i){
                 string s = a.substr(i , x);
                 if(s == b){
                     mn = min(mn , i);
                 }
            }
            if(mn == INT_MAX){
                mn = -1;
            }
            return mn;
        }
        
    }
};
