class Solution {
public:
    void para(int open,int close,int n,string& s,vector<string>& ans){
        if(s.size() == 2*n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            s.push_back('(');
            open++;
            para(open,close,n,s,ans);
            s.pop_back();
            open--;
        }
        if(close<open){
            s.push_back(')');
            close++;
            para(open,close,n,s,ans);
            s.pop_back();
            close--;
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        para(0,0,n,s,ans);
        return ans;
    }
};
