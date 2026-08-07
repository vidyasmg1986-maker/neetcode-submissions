class Solution {
public:
    int valid(int m,vector<int>& nums){
        int cnt=1,sum=0;
        for(int i : nums){
            if(sum+i>m){
                cnt+=1;
                sum=i;
            }
            else
            sum+=i;
        }
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
    int left=*max_element(nums.begin(),nums.end()),right=accumulate(nums.begin(), nums.end(), 0);;
    while (left <= right) {
    int mid = left + (right - left) / 2;

    if (valid(mid, nums) <= k) {
        right = mid - 1;  
    }
    else {
        left = mid + 1;  
        
    }
}

return left;
    }
};