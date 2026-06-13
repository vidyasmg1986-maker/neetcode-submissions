class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0,r=h.size()-1;
        int minarea=0;
        while(l<r){
           int height=min(h[l],h[r]);
           int width=r-l;
           int area=height*width;
            minarea=max(area,minarea);
           if(h[l]<h[r]) l++;
           else r--;
        }
        return minarea;
    }
};
