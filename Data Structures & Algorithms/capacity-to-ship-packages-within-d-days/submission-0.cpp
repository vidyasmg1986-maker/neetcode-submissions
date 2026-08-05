class Solution {
public:
    int valid(int d,vector<int>& weights){
        int j=1,m=0;
        for(int i=0;i<weights.size();i++){
            m+=weights[i];
            if(m>d){
                j+=1;
                m=weights[i];
            }
        }
        return j;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(),weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        while(left<=right){
            int mid=left+(right-left)/2;
            if(valid(mid,weights) <= days){
                right = mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};