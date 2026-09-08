class Solution {
public:
    int countCommas(int n) {
        int count = 0;
       int  num = n;

       for(int i=1000;i<=num;i++){
         
         count++;
       
       }

      return count;
    }
};