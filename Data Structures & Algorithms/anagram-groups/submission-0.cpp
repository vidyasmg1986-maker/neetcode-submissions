class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> m;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            vector<int> n(26,0);
            for(char a : s){
                n[a-'a']++;
            }
            m[n].push_back(s);
        }
        vector<vector<string>> k;
        for(auto &a: m){
            k.push_back(a.second);
        }
        return k;
    }
};
