class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> rank(26);

        for (int i = 0; i < order.size(); i++) {
            rank[order[i] - 'a'] = i;
        }

        for (int i = 0; i + 1 < words.size(); i++) {
            string& a = words[i];
            string& b = words[i + 1];

            int j = 0;

            while (j < a.size() && j < b.size() &&
                   a[j] == b[j]) {
                j++;
            }

            // One word is a prefix of the other.
            if (j == b.size() && j < a.size()) {
                return false;
            }

            // Compare the first differing characters.
            if (j < a.size() && j < b.size()) {
                if (rank[a[j] - 'a'] > rank[b[j] - 'a']) {
                    return false;
                }
            }
        }

        return true;
    }
};