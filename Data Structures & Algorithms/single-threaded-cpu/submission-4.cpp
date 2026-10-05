class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<vector<int>> v;

        for(int i=0;i<tasks.size();i++){
            v.push_back({tasks[i][0],tasks[i][1],i});
        }
        sort(v.begin(),v.end());

        int time=0;
        int i=0;
        vector<int> ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,
        greater<pair<int,int>>> pq;
        while(i< v.size() || !pq.empty()){
            if(pq.empty() && time < v[i][0])time = v[i][0];

            while(i<v.size() && v[i][0]<=time){
                pq.push({v[i][1],v[i][2]});
                i++;
            }
            ans.push_back(pq.top().second);
            time+=pq.top().first;

            pq.pop();
        }
        return ans;
    }
};