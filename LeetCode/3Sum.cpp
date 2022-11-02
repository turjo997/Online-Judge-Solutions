class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      
      sort(nums.begin() , nums.end());
      int k = 0 ;
      vector<vector<int>> ans;
      map<vector<int>,int> m;

      for(int i = 0 ; i<nums.size() - 2; ++i){
        
        if(i == 0 ||   nums[i] != nums[i-1]){
        
          int a = nums[i];
          
          int l = i+1;
          int r = nums.size() - 1;

          int res = 0 - a; 

          while(l<r){

             if(nums[l] + nums[r] == res){
              // if(m[{a , nums[l] , nums[r]}] == 0 ){
                ans.push_back({a , nums[l] , nums[r]});
                while(l<r && nums[l] == nums[l+1]){
                    ++l;
                }
                 while(l<r && nums[r] == nums[r-1]){
                    --r;
                }
                ++l , --r;
               // }

             }else if(nums[l] + nums[r] > res){
                 --r;
             }else if(nums[l] + nums[r] < res){
                 ++l;
             }

          }
      }
      }

      return ans;
    }
};
