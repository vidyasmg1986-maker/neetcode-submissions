class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int k) {
        int l=0,r=numbers.size()-1;
        while(l<r){
            if(numbers[l]+numbers[r] ==k){
                return {l+1,r+1};
            }
            else if(numbers[l]+numbers[r]<k){
                l++;
            }
            else{
                r--;
            }
        }
        return {-1};
    }
};
