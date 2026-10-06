class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;
        if(a>0) pq.push({a,'a'});
        if(b>0) pq.push({b,'b'});
        if(c>0) pq.push({c,'c'});

        string ans;

        while(!pq.empty()){
            auto curr = pq.top();
            pq.pop();

            if(ans.size()>=2 && ans[ans.size()-1]==curr.second &&  
            ans[ans.size()-2]==curr.second){
                if (pq.empty())
                    break;
                
                auto next = pq.top();
                pq.pop();

                ans.push_back(next.second);
                next.first-=1;

                if(next.first>0){
                    pq.push(next);
                }

                pq.push(curr);
            }
            else{
                ans.push_back(curr.second);
                curr.first -=1;

                if(curr.first >0){
                    pq.push(curr);
                }
            }
        }
        return ans;

    }
};