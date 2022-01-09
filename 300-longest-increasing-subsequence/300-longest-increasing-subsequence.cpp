class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i = 1; i < n; i++){
            if(nums[i] > ans.back())
                ans.push_back(nums[i]);
            else{
                auto it = lower_bound(ans.begin(), ans.end(),nums[i]); 
                //find the 1st element that does not less than val
                *it = nums[i];
            }
        }
        return ans.size();
    }
};