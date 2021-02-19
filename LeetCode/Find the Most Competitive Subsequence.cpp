class Solution {
public:
    vector<int> mostCompetitive(vector<int>& v, int k) {
        vector<int> ans;

        stack<int> s;
        int n = v.size();

      
        for(int i = 0 ;i<n ; ++i){

            while(!s.empty() && s.top()>v[i] && (s.size() - 1) + (n-i) >=k){
                s.pop();
            }

            if(s.size() < k){
                s.push(v[i]);
            }
        }

        
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
         reverse(ans.begin(), ans.end()); 

       return ans;


    }
};
