/**
Runtime: 14 ms, faster than 6.87% of C++ online submissions for Search Insert Position.
Memory Usage: 9.7 MB, less than 72.10% of C++ online submissions for Search Insert Position.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n-1, mid;
        if (nums[left] > target) return left;
        if (nums[right] < target) return n;
        while(left < right){
            mid = left + (right - left) / 2;
            if(nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};

/**
Runtime: 8 ms, faster than 24.14% of C++ online submissions for Search Insert Position.
Memory Usage: 9.8 MB, less than 22.75% of C++ online submissions for Search Insert Position.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n-1, mid;
        if (nums[left] > target) return left;
        if (nums[right] < target) return n;
        while(left <= right){
            mid = left + (right - left) / 2;
            if(nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                right = mid-1;
            else
                left = mid + 1;
        }
        return left;
    }
};

/**
Runtime: 4 ms, faster than 80.47% of C++ online submissions for Search Insert Position.
Memory Usage: 9.7 MB, less than 22.75% of C++ online submissions for Search Insert Position.
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto low = lower_bound(nums.begin(),nums.end(),target);       
        return ( low - nums.begin() );
    }
};
