class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        for(int i=0;i<strs.size();i++){
            int j=0;
            while(j<s.size() && j<strs[i].size() &&  s[j] == strs[i][j]){
                j+=1;
            }
            s = s.substr(0,j);
            if(s == "") return ""; 
        }
        return s;
    }
};