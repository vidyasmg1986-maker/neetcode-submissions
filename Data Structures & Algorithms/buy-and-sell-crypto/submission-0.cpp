class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_el=prices[0],max_amnt=0;
        for(int i=1;i<prices.size();i++){
            max_amnt=max(max_amnt,prices[i]-min_el);
            min_el=min(min_el,prices[i]);
        }
        return max_amnt;
    }
};
