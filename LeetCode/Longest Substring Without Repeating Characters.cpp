class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();

    set<char> s1;

    int mx=0;

    int j=0,i=0;

    while(i<n){
          if(s1.find(s[i])==s1.end()){
             s1.insert(s[i]);
             i++;


             mx=max(mx,i-j);

          }else{
            s1.erase(s[j]);

            j++;

          }

    }
      return mx;
       
    }
};
