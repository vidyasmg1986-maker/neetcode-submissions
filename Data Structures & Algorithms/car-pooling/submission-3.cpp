class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        sort(trips.begin(), trips.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });
        priority_queue<pair<int,int>,
        vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int curr_cap=0;
        int from = trips[0][1];
        int dest = trips[trips.size()-1][2];
        int j=0;

        for(int i=from; i<=dest; i++){
            if(!pq.empty()){
                if(pq.top().first == i){
                curr_cap -= pq.top().second;
                pq.pop();
            }
            }
            while(j < trips.size() && trips[j][1] == i) {
    curr_cap += trips[j][0];

    pq.push({trips[j][2], trips[j][0]});

    j++;
}

            if(curr_cap > capacity){
                return false;
            }
        }
        return true;
    }
};