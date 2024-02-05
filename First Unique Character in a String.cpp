//Basic Idea: First traverse through the string and maintain the frequency of each character in a map.
//            Later traverse through the array again and as soon as you encounter the character with frequency 1, return that index.
//            TC: O(n) [As we are traversing the array twice]
//            SC: O(n) [As we are maintaining the frequency map]
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        for(char c:s) {
            freq[c]++;
        }

        for(int i=0; i<s.length(); i++) {
            if(freq[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};
