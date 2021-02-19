class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& v) {
        
      int n = v.size();  
        
     int s = 0;
        
        vector<int> ans;

     for(int i = 0 ; i<n ;++i){
       s+=abs(v[0] - v[i]);
    }

    ans.push_back(s);


    for(int i = 1 ; i < n ; ++i){

         s+= (v[i] - v[i-1]) * i - (v[i] - v[i-1]) * (n - i);

         ans.push_back(s);
    }

        
        return ans;
    }
};
