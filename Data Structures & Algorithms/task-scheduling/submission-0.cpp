class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int> mp;
        for(auto i : tasks){
          mp[i]++;  
        }
        priority_queue<int> pq;
        queue<pair<int,int>> q;

        for(auto i : mp){
            pq.push(i.second);
        }

        int time=0;
        while(!pq.empty() || !q.empty()){
            time++;

            if(!pq.empty()){
                int cnt = pq.top()-1;
                pq.pop();

                if(cnt>0){
                    q.push({time+n,cnt});
                }
            }

            if(!q.empty() && q.front().first == time){
                pq.push(q.front().second);
                q.pop();
            }
        }
        return time;
    }
};
