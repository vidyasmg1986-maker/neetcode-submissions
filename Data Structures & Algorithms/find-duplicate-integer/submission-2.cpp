class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    map<int,int> m;
    for(int i=0;i<nums.size();i++){
        int s = nums[i];
        if(m.find(s) != m.end()){
            return s;
        }
        else{
            m[s]++;
        }
    }
    }
};
