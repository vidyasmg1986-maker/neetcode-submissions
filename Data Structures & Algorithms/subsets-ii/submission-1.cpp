class Solution {
public:
    void sbs(int i,vector<vector<int>>& v,vector<int>& ck,
    vector<int>& nums){
        v.push_back(ck);
        for(int j=i;j<nums.size();j++){
            if(j>i && nums[j]==nums[j-1]){
                continue;
            }
            /*112*/
            ck.push_back(nums[j]);
            sbs(j+1,v,ck,nums);
            ck.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> ck;
        sort(nums.begin(),nums.end());
        sbs(0,v,ck,nums);
        return v;
    }
};
