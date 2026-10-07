class Solution {
public:
    void sbst(int i,vector<vector<int>>& v,vector<int>& n,vector<int>& nums){
        if(i == nums.size()){
            v.push_back(n);
            return ;
        }
        sbst(i+1,v,n,nums);
        n.push_back(nums[i]);
        sbst(i+1,v,n,nums);
        n.pop_back();    
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> n;
        sbst(0,v,n,nums);
        return v;
    }
};
