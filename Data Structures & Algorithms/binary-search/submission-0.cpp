class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size(),mid;
        while(l<r){
            mid=(l+r)/2;
            if(nums[mid]==target){
                return mid;
            }
            else  if(nums[mid]<target){
                l++;
            }
            else{
                r--;
            }
        }
        return -1;
    }
};
