class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i=0,j=0;
        string s;
        while(i<w1.size() and j<w2.size()){
            s+=w1[i];
            s+=w2[j];
            i++;
            j++;
        }
        while(i<w1.size()){
            s+=w1[i];
            i++;
        }
        while(j<w2.size()){
            s+=w2[j];
            j++;
        }
        return s;
    }
};