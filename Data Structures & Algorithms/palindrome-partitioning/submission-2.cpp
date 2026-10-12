class Solution {
public:
    bool palindrome(string s){
        int st=0,end=s.size()-1;    
        while(st<end){
            if(s[st] != s[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
    void apart(int st,vector<vector<string>>& v,vector<string>& t,string& s){
        if(st == s.size()){
            v.push_back(t);
            return;
        }
        for(int end = st ; end<s.size();end++){
            string sb = s.substr(st,end-st+1);
            if(palindrome(sb)){
                t.push_back(sb);
                apart(end+1,v,t,s);
                t.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
       vector<vector<string>> v;
       vector<string> t;
       apart(0,v,t,s);
       return v;
    }
};
