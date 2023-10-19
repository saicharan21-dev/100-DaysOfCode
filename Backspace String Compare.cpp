class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string vec1, vec2;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '#') {
                if (!vec1.empty()) {
                    vec1.pop_back();
                }
            } else {
                vec1.push_back(s[i]);
            }
        }

        for (int i = 0; i < t.length(); i++) {
            if (t[i] == '#') {
                if (!vec2.empty()) {
                    vec2.pop_back();
                }
            } else {
                vec2.push_back(t[i]);
            }
        }

        return vec1 == vec2;
    }
};
//
