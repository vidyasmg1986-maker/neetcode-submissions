class Solution {
public:
    void backtrack(int i, vector<string>& a, string& k,
               vector<string>& ans) {
    if(k.size() == a.size()){
        ans.push_back(k);
        return;
    }

    for (int j = 0; j < a[i].size(); j++) {
        // Choose a character
        k.push_back(a[i][j]);
        // Recursively process the next group
        backtrack(i+1,a,k,ans);
        // Undo the choice
        k.pop_back();
    }
}

    vector<string> letterCombinations(string digits) { 
        if (digits.empty()) {
    return {};
}
        vector<string> v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string s;
        int n=digits.size();
        vector<string> a;
        for (int i = 0; i < digits.size(); i++) {
        int num = digits[i] - '0';
        a.push_back(v[num]);
        }
        string k;
        vector<string> ans;
        backtrack(0,a,k,ans);
        return ans;
    }
};
