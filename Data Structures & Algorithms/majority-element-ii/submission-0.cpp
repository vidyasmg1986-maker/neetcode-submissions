class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> v;
        int n=nums.size();
        for(int i : nums){
            m[i]+=1;
        }
        for(auto &i:m){
            if(i.second>n/3){
                v.push_back(i.first);
            }
        }
        return v;
    }
};