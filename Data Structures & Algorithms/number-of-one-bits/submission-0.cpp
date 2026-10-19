class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res=0;
        while(n>0){
            int a=n%2;
            if(a == 1){
                res+=1;
            }
            n=n/2;
        }
        return res;
    }
};
