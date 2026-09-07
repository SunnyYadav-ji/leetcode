class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        

        vector<vector<int>> result;

        int n = nums.size();

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Fix one element
        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // If the first element is positive,
            // three positive numbers cannot sum to 0
            if (nums[i] > 0)
                break;

            int left = i + 1;
            int right = n - 1;

            // Step 3: Two-pointer search
            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    result.push_back({
                        nums[i],
                        nums[left],
                        nums[right]
                    });

                    // Skip duplicate second elements
                    while (left < right &&
                           nums[left] == nums[left + 1])
                        left++;

                    // Skip duplicate third elements
                    while (left < right &&
                           nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
                else if (sum < 0) {
                    // Need a bigger sum
                    left++;
                }
                else {
                    // Need a smaller sum
                    right--;
                }
            }
        }

        return result;
    }
};