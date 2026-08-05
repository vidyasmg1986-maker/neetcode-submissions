#include <cmath>
class Solution {
public:
    int valid(int d,vector<int>& piles ){
        int r=0;
        for(int i : piles){
            r+=(i+d-1)/d;
        }
        return r;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1 ,right =  *max_element(piles.begin(), piles.end());
        int mid;
        while(left<=right){
            mid = left+(right-left)/2;
            if(valid(mid,piles) <= h){
                right= mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return left; 
    }
};
