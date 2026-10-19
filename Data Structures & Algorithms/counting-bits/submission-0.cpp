class Solution {
public:
    int bina(int n){
        int res=0;
        while(n>0){
            int a =n%2;
            if(a == 1){
                res++;
            }
            n=n/2;
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            v.push_back(bina(i));
        }
        return v;
    }
};
