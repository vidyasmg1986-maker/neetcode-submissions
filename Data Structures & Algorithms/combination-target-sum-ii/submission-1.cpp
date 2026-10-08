class Solution {
public:
    void cmbsum(int i,vector<vector<int>>& v,vector<int>& c,
    vector<int>& candidates,int target){
        if(target == 0){
            v.push_back(c);
            return ;
        }

        if(target < 0 || i == candidates.size()){
            return ; 
        }

        for(int j=i;j<candidates.size();j++){
            if(j>i && candidates[j]==candidates[j-1]){
                continue;
            }
            if(candidates[j]>target){
                break;
            }
            c.push_back(candidates[j]);

            // j + 1 because every element can be used only once
            cmbsum(j + 1, v, c, candidates,
                   target - candidates[j]);

            c.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> c;
        sort(candidates.begin(),candidates.end());
        cmbsum(0,v,c,candidates,target);
        return v;
    }
};
