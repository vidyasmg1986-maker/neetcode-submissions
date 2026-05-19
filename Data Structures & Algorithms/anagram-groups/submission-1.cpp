class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m;
        for(string n : strs){
            string s = n;
            sort(s.begin(),s.end());
            m[s].push_back(n);
        }
        vector<vector<string>> k;
        for(auto &a: m){
            k.push_back(a.second);
        }
        return k;
    }
};
