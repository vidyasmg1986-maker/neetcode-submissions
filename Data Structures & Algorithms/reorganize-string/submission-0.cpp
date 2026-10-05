class Solution {
public:
    string reorganizeString(string s) {
        map<char,int> mp;
        for(auto i : s){
            mp[i]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto i : mp){
            pq.push({i.second,i.first});
        }

        string st;
        pair<int,char> ck;
        while(!pq.empty()){
            pair<int,char> curr = pq.top();
            pq.pop();

            st.push_back(curr.second);
            curr.first -=1;

            if(ck.first > 0){
                pq.push(ck);
            }

            ck = {curr.first,curr.second};
        }

        return ck.first>0 ? "" : st;
        
    }
};