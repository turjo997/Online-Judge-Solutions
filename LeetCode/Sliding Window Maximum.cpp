class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
    int n = v.size() ;     
    vector<int> ans;
    
    if(k == 1 || n == 1){
        return v;
    }

    multiset<int> s;
    
    for(int i = 0 ; i<k ; ++i){
        s.insert(v[i]);
    }

    ans.push_back(*s.rbegin());

    for(int i = k ; i< n; ++i){
          s.insert(v[i]);
          s.erase(s.find(v[i-k]));
          ans.push_back(*s.rbegin());
    }

        
        return ans ; 
    }
};
