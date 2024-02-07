//Basic Idea: First count the frequency of each letter and store it in a map
//            Use Bucket sort to sort and form the answer string;
//TC: O(n)
//SC: O(n)

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        int max_freq = 0;
        for(char c:s) {
            mp[c]++;
            max_freq = max(max_freq, mp[c]);
        }

        vector<vector<char>> freq(max_freq+1);

        for(auto [key, val] : mp) {
            freq[val].push_back(key);
        }

        string ans = "";

        for(auto i = freq.size()-1; i > 0; i-- ) {
            vector<char> vec = freq[i];
            for(auto c : vec) {
                for(int j = 0; j < i; j++) {
                    ans += c;
                }
            }
        }
        return ans;
    }
};
