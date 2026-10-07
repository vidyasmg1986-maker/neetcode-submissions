class Solution {
public:
    int subsum(int i,int sum, vector<int>& nums){
        if(i == nums.size()){
            return sum;
        }        
        int l,r;
        if(i<nums.size()){
            l=subsum(i+1,sum^nums[i],nums);
            r=subsum(i+1,sum,nums);
        }
        return l+r;
    }
    int subsetXORSum(vector<int>& nums) {
       int result = subsum(0,0,nums);
       return result;
    }
};