class Solution {
public:
    bool match(int i,vector<int>& v,vector<int>& matchsticks,int res){
        if(i == matchsticks.size()){
            return true;
        }
        for(int j=0;j<4;j++){
            if(v[j]+matchsticks[i]>res){
                continue;
            }
            v[j]+=matchsticks[i];

            if(match(i+1,v,matchsticks,res)){
                return true;
            }

            v[j]-=matchsticks[i];

            if (v[j] == 0)
                break;
        }
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        int sum = 0;
        for(auto i : matchsticks){
            sum += i;
        }
        int res= sum/4;
        if(sum%4 != 0) return false;
        vector<int> v(4,0);
        sort(matchsticks.begin(), matchsticks.end(), greater<int>());
        if (matchsticks[0] > res) {
            return false;
        }
        return match(0,v,matchsticks,res);

    }
};