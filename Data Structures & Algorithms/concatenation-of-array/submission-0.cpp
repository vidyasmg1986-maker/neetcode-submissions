class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> num1=nums;
        int k=nums.size();
        for(int i=0;i<nums.size();i++){
            num1.push_back(nums[i]);
        }
        return num1;
    }
};