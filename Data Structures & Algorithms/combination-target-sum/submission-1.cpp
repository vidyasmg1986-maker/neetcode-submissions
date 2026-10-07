class Solution {
public:
    void cmbsum(int i,vector<vector<int>>& v,vector<int>& c,vector<int>&    
    nums,int target){
        if(target == 0) {
            v.push_back(c);
            return;
        }

        if(target < 0 || i == nums.size())
            return;
        cmbsum(i+1,v,c,nums,target);
        c.push_back(nums[i]);
        cmbsum(i,v,c,nums,target-nums[i]);
        c.pop_back();

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        vector<int> c;
        cmbsum(0,v,c,nums,target);
        return v;
    }
};
