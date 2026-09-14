class Solution {
public:
    bool isValid(string s) {
        string t;
        for(int i = 0; i<s.size() ;i++){
            if(s[i] == '{' || s[i]=='(' || s[i]=='['){
                t.push_back(s[i]);
            }
            else{
                if(t.empty()) return false;
                char last = t.back();
                if((s[i] == ')' && last != '(') ||
                    (s[i] == ']' && last != '[') ||
                    (s[i] == '}' && last != '{')){
                    return false;
                }
                t.pop_back();
            }
        }
        return t.empty();         
    }
};
