class Solution {
public:
    int maximumWealth(vector<vector<int>>& mat) {
        
  
    int mx = 0;

    for(int i = 0; i<mat.size() ; ++i){
        int s = 0;
        for(int j = 0 ;j<mat[i].size() ; ++j){
            s+=mat[i][j];
        }

        mx  = max(s , mx) ;

    }
        
        return mx;
    }
};
