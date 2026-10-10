class Solution {
public:
    void permut(vector<vector<int>>& v,vector<int>& c, vector<int>& nums,
    vector<int>& vis){
        if(c.size() == nums.size()){
            v.push_back(c);
            return;
        }
        for(int j=0;j<nums.size();j++){
            if((j>0)&&(nums[j]==nums[j-1] && vis[j-1] == 0) || vis[j]==1){
                continue;
            }

            c.push_back(nums[j]);
            vis[j]=1;
            permut(v,c,nums,vis);
            vis[j]=0;
            c.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> c;
        vector<int> vis(nums.size(),0);
        sort(nums.begin(),nums.end());
        permut(v,c,nums,vis);
        return v;
    }
};