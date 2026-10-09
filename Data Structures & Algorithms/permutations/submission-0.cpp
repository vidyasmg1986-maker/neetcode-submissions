class Solution {
public:
    void perm(vector<vector<int>>& v,vector<int>& ck,vector<int>& nums
    ,vector<int>& vis){
        if(ck.size() == nums.size()){
            v.push_back(ck);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i]==1){
                continue;
            }
            ck.push_back(nums[i]);
            vis[i]=1;
            perm(v,ck,nums,vis);
            ck.pop_back();
            vis[i]=0;
        }       
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        int n= nums.size();
        vector<int> ck;
        vector<int> vis(n,0);
        perm(v,ck,nums,vis);
        return v;
    }
};
