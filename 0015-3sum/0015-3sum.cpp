class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int left, right, s, sum;
        int n = nums.size();
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 and nums[i] == nums[i - 1])
                continue;
            left = i + 1;
            right = n - 1;
            sum = -1 * nums[i];
            while (left < right) {
                int s = nums[left] + nums[right];
                if (s == sum) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    right--;
                    left++;
                    while (left < n and nums[left] == nums[left - 1])
                        left++;
                    while (right >= 0 and nums[right] == nums[right + 1])
                        right--;
                } else if (sum > s)
                    left++;
                else
                    right--;
            }
        }
        return result;
    }
};