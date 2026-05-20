class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> v;
        for(auto &b : m){
            int num= b.first;
            int cnt= b.second;
            for(int i=0; i<cnt; i++){
                v.push_back(num);
            }
        } 
        nums=v;
    }
};