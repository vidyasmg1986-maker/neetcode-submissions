class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> f(26,0);
        vector<int> window(26,0);
        int l=0;
        for(char c : s1){
            f[c-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            window[s2[i]-'a']++;
            if(i-l+1>s1.size()){
                window[s2[l]-'a']--;
                l++;
            }
            if(i-l+1 == s1.size()){
                if(window == f){
                    return true;
                }
            }
        }
        return false;
    }
};
