class Solution {
public:
    int maximumLengthSubstring(string s) {
          unordered_map<char, int> charCount;
    int maxLen = 0; // This will store the maximum length of valid substrings found
    int left = 0; // Left boundary of our sliding window

    // Iterate through the string with 'right' serving as the right boundary of our sliding window
    for (int right = 0; right < s.length(); ++right) {
        // Include the current character in our window
        charCount[s[right]]++;

        // If the current character's count exceeds 2, we need to shrink the window from the left
        while (charCount[s[right]] > 2) {
            charCount[s[left]]--; // Remove the character at 'left' from our window
            left++; // Shrink the window from the left
        }

        // Update maxLen if the current window size is larger than the previous maxLen
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
        
    }
};