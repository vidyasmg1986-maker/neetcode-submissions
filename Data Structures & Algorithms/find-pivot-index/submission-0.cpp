class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       vector<int> v(nums.size());
       v[0]=nums[0];
       for(int i=1;i<nums.size();i++){
        v[i]=nums[i]+v[i-1];
       }
       int leftsum=0;
       for(int i=0;i<nums.size();i++){
        leftsum=i==0?0:v[i-1];
        int rightsum=v[nums.size()-1]-v[i];
        if (leftsum==rightsum)return i;
       }
       return -1; 
    }
};