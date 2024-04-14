class Solution {
public:

    string frequencySort(string s) {
         unordered_map<char, int> freqMap;
        for (char c : s) {
            freqMap[c]++;
        }

        vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());
        sort(freqVec.begin(), freqVec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second; 
        });

        string result;
        for (auto& p : freqVec) {
            result += string(p.second, p.first);
        }

        return result;
    }
};