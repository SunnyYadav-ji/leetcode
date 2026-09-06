class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size=nums.size();

        vector<int> positive;
        vector<int> negative;
       
        for(int i=0;i<size;i++){
            if(nums[i]<0){
                negative.push_back(nums[i]);
            }
            else{
                positive.push_back(nums[i]);
            }
        }
                         
        if(negative.size()==0){
          
          for(int i=0;i<positive.size();i++){
            positive[i]=positive[i]*positive[i];
          }
            return positive;

        }

       if(positive.size()==0){
          
          for(int i=0;i<negative.size();i++){
            negative[i]=negative[i]*negative[i];
          }
            reverse(negative.begin(),negative.end());
            return negative;

        }    

       int i=0,j=0;
       int id=0;
       int n=negative.size();
       int m=positive.size();

       vector<int> res(n+m);
      for(int i=0;i<negative.size();i++){
            negative[i]=negative[i]*negative[i];
           }
            reverse(negative.begin(),negative.end());

        for(int i=0;i<positive.size();i++){
            positive[i]=positive[i]*positive[i];
          }

      while(i<n and j<m){
         if(negative[i]<positive[j]){
          res[id] = negative[i];
            i++;
         }
         else{
          res[id] = positive[j];
          j++;
         }
         id++;
      }

      while(i<n){
        res[id]=negative[i];
        i++;
        id++;
      }

       while(j<m){
        res[id]=positive[j];
        j++;
        id++;
      }



 return res; 




    }
};