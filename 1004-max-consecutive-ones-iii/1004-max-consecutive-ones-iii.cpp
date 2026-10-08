class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low =0;
        int high=0;
        int n=nums.size();
        int ans=0;
        int zero=0;

        for(high=0;high<n;high++){
         
         if(nums[high] == 0){

           zero++;
         }

         while(zero > k){
           if(nums[low] == 0){

              zero--;
           }

              low++;
           }
           int len=high-low+1;
            ans=max(ans,len);
        }

        return ans;
    }
};