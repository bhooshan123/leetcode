class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder merged = new StringBuilder(); // Use StringBuilder to efficiently build the result string
        int i = 0, j = 0;
        // Use two pointers to iterate through both strings
        while (i < word1.length() || j < word2.length()) {
            // If we haven't reached the end of word1, append the next character
            if (i < word1.length()) {
                merged.append(word1.charAt(i++));
            }
            // If we haven't reached the end of word2, append the next character
            if (j < word2.length()) {
                merged.append(word2.charAt(j++));
            }
        }
        return merged.toString();
    }
}
