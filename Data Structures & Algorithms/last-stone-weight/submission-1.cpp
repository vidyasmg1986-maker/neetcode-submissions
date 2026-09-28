class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto i : stones){
            pq.push(i);
        }

        while(pq.size() > 1){
            int l1=pq.top();
            pq.pop();
            int l2=pq.top();
            pq.pop();
            if(l1 < l2){
                pq.push(l2-l1);
            }
            else if(l1 > l2){
                pq.push(l1-l2);
            }
        }

        return pq.empty() ? 0 : pq.top();
    }
};
