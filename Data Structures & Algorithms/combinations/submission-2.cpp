class Solution {
public:
    void cmb(int i,vector<vector<int>>& v,vector<int>& c,int n,int k){
        if(c.size() == k){
            v.push_back(c);
            return;
        }
        if(i>n){
            return;
        }
        cmb(i+1,v,c,n,k);
        c.push_back(i);
        cmb(i+1,v,c,n,k);
        c.pop_back();
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v;
        vector<int> c;
        cmb(1,v,c,n,k);
        return v;
    }
};