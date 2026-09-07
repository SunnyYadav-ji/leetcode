class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size(),max_diff=INT_MAX;
        int diff;
        int result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
         int  left=i+1;
         int  right=n-1;
         while( left < right){
            int sum = nums[i]+ nums[left]+ nums[right];
            diff = abs(sum - target);
             if(diff < max_diff){
                max_diff=diff;
                result = sum;
             }
             if(sum == target){
                return sum;
             }
             else if(sum< target){
                left++;
             }
             else{
                right--;
             }
          

          
         }


        }
        return result;
    }
};