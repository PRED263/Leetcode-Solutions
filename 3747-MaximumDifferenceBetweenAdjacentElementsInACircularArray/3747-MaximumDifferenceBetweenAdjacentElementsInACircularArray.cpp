// Last updated: 6/12/2025, 10:16:42 PM
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxDiff = 0;
        int n = nums.size();
        
        // Check adjacent pairs in the array
        for (int i = 0; i < n - 1; i++) {
            int diff = abs(nums[i] - nums[i + 1]);
            maxDiff = max(maxDiff, diff);
        }
        
        // Check the circular adjacent pair (last and first element)
        int circularDiff = abs(nums[n - 1] - nums[0]);
        maxDiff = max(maxDiff, circularDiff);
        
        return maxDiff;
    }
};