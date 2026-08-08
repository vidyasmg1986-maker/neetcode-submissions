class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int l=0,max_cnt=0;
        for(int i=0;i<s.size();i++){
            m[s[i]]+=1;
            while(m[s[i]]>1){
                m[s[l]]-=1;
                l+=1;
            }
            max_cnt=max(max_cnt,i-l+1);
        }
        return max_cnt;
    }
};
