class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> v;
        for(auto p : tokens){
            if(p == "+"){
                int ans = v[v.size()-2]+v[v.size()-1];
                v.pop_back();
                v.pop_back();
                v.push_back(ans);
            }
            else if(p == "-"){
                int ans = v[v.size()-2]-v[v.size()-1];
                v.pop_back();
                v.pop_back();
                v.push_back(ans);
            }
            else if(p == "*"){
                int ans = v[v.size()-2]*v[v.size()-1];
                v.pop_back();
                v.pop_back();
                v.push_back(ans);
            }
            else if(p == "/"){
                int ans = v[v.size()-2]/v[v.size()-1];
                v.pop_back();
                v.pop_back();
                v.push_back(ans);
            }
            else{
                v.push_back(stoi(p));
            }
        }
        return (v[v.size()-1]);
    }
};
