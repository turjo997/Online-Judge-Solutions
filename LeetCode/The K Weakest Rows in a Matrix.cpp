class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        vector<pair<int,int>> ans;
         vector<int> kw1;
        
    for(int i = 0; i<mat.size() ; ++i){
            int on = 0;
        for(int j = 0 ;j<mat[i].size() ; ++j){
            if(mat[i][j] == 1) on++;
        }
        ans.push_back(make_pair(on , i));
    }

    sort(ans.begin() , ans.end());


    for(int i = 0 ; i<k ; ++i){
           kw1.push_back(ans[i].second);
    }
    
    return kw1;
    }
};
