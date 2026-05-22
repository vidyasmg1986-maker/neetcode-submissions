class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> pref;
        int sum=0,cnt=0;
        pref[0]=1;
        for( int i : nums){
              sum+=i;
              int c= sum-k;
              if(pref.find(c) != pref.end() ){
                cnt+=pref[c];
              }
              pref[sum]++;
        }
        return cnt;
    }
};