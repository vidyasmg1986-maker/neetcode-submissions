class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> p_t(n+1,0);
        vector<int> n_t(n+1,0);

        for(int i=0;i<trust.size();i++){
            p_t[trust[i][0]] += 1;
            n_t[trust[i][1]] += 1;
        }
        int result=-1;
        for(int i=1;i<p_t.size();i++){
            if(p_t[i] == 0 && n_t[i] == n-1){
                result = i;
                break;
            }
        }
        return result;
    }
};