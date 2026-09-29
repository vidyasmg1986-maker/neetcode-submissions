
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<
pair<int, vector<int>>,
vector<pair<int, vector<int>>>,
greater<pair<int, vector<int>>>
> pq;

        for(auto i : points){
            float dist = ((i[0]*i[0] + i[1]*i[1]));
            pq.push({dist,i});
        }
        
        vector<vector<int>> v;

        while(k--){
            v.push_back(pq.top().second);
            pq.pop();
        }

        return v;
    }
};
