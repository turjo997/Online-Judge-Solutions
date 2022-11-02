class Solution {
public:
    void rotate(vector<int>& nums, int k) {

    deque<int> d;
    int n = nums.size();

    for(int i = 0 ; i<nums.size() ; ++i){
        d.push_back(nums[i]);
    }
    while(k--){
        int x = d[n-1];
        d.pop_back();
        d.push_front(x);
    }

   nums.clear();

    for(int i = 0 ; i<n ; ++i){
        nums.push_back(d[i]);
    }
    for(int i = 0 ; i<n ; ++i){
        cout << nums[i]<<" ";
    }

    }
};
