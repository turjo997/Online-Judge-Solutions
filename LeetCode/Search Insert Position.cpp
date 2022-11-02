class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int ind = -1;

        for(int i = 0 ; i< nums.size() ; ++i){
             if(nums[i] == target){
                 ind  = i;
             }
        }
        if(ind == -1){
         
         for(int i = 0 ; i< nums.size() ; ++i){
             if(nums[i] < target){
                 ind = i;
             }
        }
        ind++;
        }

        return ind;

        
    }
};
