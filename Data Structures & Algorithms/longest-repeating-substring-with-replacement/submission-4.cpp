class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int> m;
        int l=0,max_frq=0,ans=0;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            max_frq=max(max_frq,m[s[i]]);
            while((i-l+1)-max_frq > k){
                m[s[l]]--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};
