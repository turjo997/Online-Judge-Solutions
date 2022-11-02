class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        map<int,int> m;
        
        for(int i = 0 ; i < nums.size() ; ++i){
            m[nums[i]]++;
        }
        
         for(int i = 0 ; i < nums.size() ; ++i){
            if(m[nums[i]] > 2){
                int x = (2 - m[nums[i]]) * -1;
                m[nums[i]] -= x;
            }
        }
         nums.clear();

        for (auto it = m.begin(); it != m.end(); ++it){
            int x = it->second;

            while(x--){
                nums.push_back(it->first);
            }
        }
        
        return nums.size();
        
        
    }
};
