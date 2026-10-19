class Solution {
public:
    string addBinary(string a, string b) {
        int carr=0;
        string s;
        while(a.size()!=0 || b.size()!=0 || carr!=0){
            int n = 0, m = 0;

            if (!a.empty()) {
                n = a.back() - '0';
                a.pop_back();
            }

            if (!b.empty()) {
                m = b.back() - '0';
                b.pop_back();
            }

            int sum = n + m + carr;

            s.push_back('0' + sum % 2);
            carr = sum / 2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};