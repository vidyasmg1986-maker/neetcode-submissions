class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> cnt;
        for(int i=0;i<nums.size();i++){
        int a=nums[i];
            if(cnt.find(a)!=cnt.end() and abs(i-cnt[a])<=k){
                return true;
            }
            cnt[a]=i;
        }
        return false;
    }
};