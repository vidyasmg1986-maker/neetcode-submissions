class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids){
        vector<int> v;
        for(int i : asteroids){
            if(i >= 0){
                v.push_back(i);
            }
            else{
                int j = i;
                if(!v.empty() && v.back()>0){
                while(j != 0 && !v.empty() && v.back() > 0){
                    int l = v.back();                   
                    if(abs(l) ==  abs(j)){
                        v.pop_back();
                        j=0;
                    }
                    else if(abs(l) > abs(j)){
                        j=0;
                    }
                    else{
                        v.pop_back();
                    }
                }
                }
                if(j != 0){
                    v.push_back(j);
                }
            }
        }
        return v;
    }
};