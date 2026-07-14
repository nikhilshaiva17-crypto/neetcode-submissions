class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>count;
     
       for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size()-1;j++){
            if((nums[i]+nums[j+1])==target){
            count.push_back(i);
            count.push_back(j+1);
            break;
            }
        }
       }
      return count;
    }
};
