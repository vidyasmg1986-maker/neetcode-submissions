class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<vector<int>> v(nums.size()+1);
        for(auto &b : m){
            int num= b.first;
            int cnt= b.second;
            v[cnt].push_back(num);
        }
        vector<int> res;
        for(int i=v.size()-1; i>=0 && res.size()< k ;i--){
            for(int n : v[i]){
                res.push_back(n);
                if(res.size() == k) break;
            }
        }
        return res;
    }
};
