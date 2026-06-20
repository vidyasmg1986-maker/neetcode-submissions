class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int maxlen=0;
        if(nums.size() == 1){
            return 1;
        }
        for(int num: nums){
            if(s.find(num-1) == s.end()){
                int curNum=num;
                int curlen=1;
                while(s.find(curNum+1) != s.end()){
                    curNum+=1;
                    curlen+=1;
                }
                maxlen=max(maxlen,curlen);

            }
        }
        return maxlen;

    }
};
