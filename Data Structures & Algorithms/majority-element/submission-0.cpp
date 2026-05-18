class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1,max=INT_MIN,val=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]){
                cnt+=1;
            }
            else{
                cnt=1;
            }
            if(cnt>max){
                   max=cnt;
                   val=nums[i-1];
                }
        }
        return val;
    }
};