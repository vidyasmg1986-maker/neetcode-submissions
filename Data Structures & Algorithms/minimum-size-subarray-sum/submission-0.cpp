class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen=INT_MAX,curr=0;
        int n=nums.size(),i=0,j=0;
        while(i<n && j<=n){
            if(curr >= target){
                minlen=min(minlen,abs(j-i));
                curr-=nums[i];
                i++;
            }
            else{
                if(j<n){
                    curr+=nums[j];
                }
                j++;
            }
        }
        return minlen==INT_MAX ? 0 : minlen ;
    }
};